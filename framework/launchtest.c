/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launchtest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 14:23:35 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 20:39:04 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libunit.h"

void	ft_putstr2(const char *s)
{
	write(1, s, strlen(s));
}

const char	*get_signal_name(int status)
{
	if (!WIFSIGNALED(status))
		return (NULL);
	if (WTERMSIG(status) == SIGSEGV)
		return ("SIGSEGV");
	if (WTERMSIG(status) == SIGBUS)
		return ("SIGBUS");
	if (WTERMSIG(status) == SIGABRT)
		return ("SIGABRT");
	if (WTERMSIG(status) == SIGFPE)
		return ("SIGFPE");
	if (WTERMSIG(status) == SIGPIPE)
		return ("SIGPIPE");
	if (WTERMSIG(status) == SIGILL)
		return ("SIGILL");
	if (WTERMSIG(status) == SIGALRM)
		return ("SIGALRM");
	return (NULL);
}

void	run_test_child(t_unit_tests **lst, t_unit_tests *test, FILE *fptr)
{
	int	null_fd;
	int	(*f)(void);

	f = test->fun;
	while (*lst)
		free_test_node(lst);
	fclose(fptr);
	null_fd = open("/dev/null", O_WRONLY);
	dup2(null_fd, 1);
	close(null_fd);
	alarm(4);
	_exit(f() != 0);
}

int	run_test(t_unit_tests **lst, t_unit_tests *test, FILE *fptr)
{
	pid_t	pid;
	int		status;
	int		ret_code;

	ret_code = 0;
	pid = fork();
	if (pid == 0)
		run_test_child(lst, test, fptr);
	wait(&status);
	ft_putstr2(test->type);
	ft_putstr2(":");
	ft_putstr2(test->name);
	ft_putstr2(":[");
	ret_code = handle_test_result(status, test, fptr);
	ft_putstr2("]\n");
	return (ret_code);
}

int	launchtest(t_unit_tests **lst)
{
	int				tot;
	int				failed;
	FILE			*fptr;

	fptr = open_log_file((*lst)->type);
	if (!fptr)
		return (-1);
	failed = 0;
	tot = ft_lstsize(*lst);
	while (*lst)
	{
		failed += run_test(lst, *lst, fptr);
		free_test_node(lst);
	}
	printf("\n\033[33m%d/%d tests passed\033[0m\n\n\n", tot + failed, tot);
	fprintf(fptr, "\n%d/%d tests passed\n\n\n", tot + failed, tot);
	fclose(fptr);
	if (failed < 0)
		return (-1);
	return (0);
}
