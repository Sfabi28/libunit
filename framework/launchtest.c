/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launchtest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 14:23:35 by sfabi             #+#    #+#             */
/*   Updated: 2026/05/23 15:04:24 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libunit.h"

void	ft_putstr(const char *s)
{
	write(1, s, strlen(s));
}

int	run_test(const char *func, const char *name, int (*f)(void))
{
	pid_t	pid;
	int		status;
	int		ret_code;

	ret_code = 0;
	pid = fork();
	if (pid == 0)
		exit(f() != 0);
	waitpid(pid, &status, 0);
	ft_putstr(func);
	ft_putstr(":");
	ft_putstr(name);
	ft_putstr(":[");
	if (WIFSIGNALED(status) && WTERMSIG(status) == SIGSEGV)
	{
		ret_code = -1;
		ft_putstr("SIGSEGV");
	}
	else if (WEXITSTATUS(status) == 0)
	{
		ft_putstr("OK");
		ret_code = 0;
	}
	else
	{
		ft_putstr("KO");
		ret_code = -1;
	}
	ft_putstr("]\n");
	return (ret_code);
}

int	launchtest(t_unit_tests **lst)
{
	int tot_test;
	int failed;

	failed = 0;
	tot_test = ft_lstsize(*lst);
	t_unit_tests *cur;

	while (*lst)
	{
		cur = *lst;
		failed += run_test(cur->type, cur->name, cur->fun);
		*lst = cur->next;
		free(cur);
	}
	printf("\n%d/%d tests passed\n\n\n", tot_test + failed, tot_test);
	return (0);
}