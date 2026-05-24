/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launchtest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 14:23:35 by sfabi             #+#    #+#             */
/*   Updated: 2026/05/24 13:17:48 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libunit.h"

void	ft_putstr(const char *s)
{
	write(1, s, strlen(s));
}

static const char	*get_signal_name(int status)
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

static int	print_signal_result(int status, const char *func,
	const char *name, FILE *fptr)
{
	const char	*signal_name;

	signal_name = get_signal_name(status);
	if (signal_name == NULL)
		return (0);
	ft_putstr("\033[31m");
	ft_putstr(signal_name);
	ft_putstr("\033[0m");
	fprintf(fptr, "%s:%s:[%s]\n", func, name, signal_name);
	fflush(fptr);
	return (-1);
}

int	run_test(const char *func, const char *name, int (*f)(void), FILE* fptr)
{
	pid_t	pid;
	int		null_fd;
	int		status;
	int		ret_code;

	ret_code = 0;
	pid = fork();
	if (pid == 0)
	{
		null_fd = open("/dev/null", O_WRONLY);
		dup2(null_fd, 1);
		close(null_fd);
		alarm(3);
		_exit(f() != 0);
	}
	wait(&status);
	ft_putstr(func);
	ft_putstr(":");
	ft_putstr(name);
	ft_putstr(":[");
	if (print_signal_result(status, func, name, fptr) == -1)
		ret_code = -1;
	else if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
	{
		ft_putstr("\033[32mOK\033[0m");
		fprintf(fptr, "%s:%s:[OK]\n", func, name);
		fflush(fptr);
		ret_code = 0;
	}
	else
	{
		ft_putstr("\033[31mKO\033[0m");
		fprintf(fptr, "%s:%s:[KO]\n", func, name);
		fflush(fptr);
		ret_code = -1;
	}
	ft_putstr("]\n");
	return (ret_code);
}

int	launchtest(t_unit_tests **lst)
{
	int tot_test;
	int failed;
	FILE* fptr = NULL;
	char *fname;
	size_t n;
	t_unit_tests *cur;

	n = strlen((*lst)->type) + 5;
	fname = malloc(n);
	if (fname)
	{
		strcpy(fname, (*lst)->type);
		strcat(fname, ".log");
		fptr = fopen(fname, "w");
		free(fname);
		if (!fptr)
			return (-1);
	}
	failed = 0;
	tot_test = ft_lstsize(*lst);

	while (*lst)
	{
		cur = *lst;
		failed += run_test(cur->type, cur->name, cur->fun, fptr);
		*lst = cur->next;
		free(cur);
	}
	printf("\n\033[33m%d/%d tests passed\033[0m\n\n\n", tot_test + failed, tot_test);
	fprintf(fptr, "\n%d/%d tests passed\n\n\n", tot_test + failed, tot_test);
	fclose(fptr);
	if (failed < 0)
		return (-1);
	return (0);
}