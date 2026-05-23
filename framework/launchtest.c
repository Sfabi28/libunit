/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launchtest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 14:23:35 by sfabi             #+#    #+#             */
/*   Updated: 2026/05/23 16:33:56 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libunit.h"

void	ft_putstr(const char *s)
{
	write(1, s, strlen(s));
}

int	run_test(const char *func, const char *name, int (*f)(void), FILE* fptr)
{
	pid_t	pid;
	int		status;
	int		ret_code;

	ret_code = 0;
	pid = fork();
	if (pid == 0)
		_exit(f() != 0);
	waitpid(pid, &status, 0);
	ft_putstr(func);
	ft_putstr(":");
	ft_putstr(name);
	ft_putstr(":[");
	if (WIFSIGNALED(status) && WTERMSIG(status) == SIGSEGV)
	{
		ft_putstr("\033[31mSIGSEGV\033[0m");
		fprintf(fptr, "%s:%s:[SIGSEGV]\n", func, name);
		fflush(fptr);
		ret_code = -1;
	}
	else if (WEXITSTATUS(status) == 0)
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

	n = strlen((*lst)->type) + 5;
	fname = malloc(n);
	if (fname)
	{
		strcpy(fname, (*lst)->type);
		strcat(fname, ".log");
		fptr = fopen(fname, "w");
		free(fname);
	}
	failed = 0;
	tot_test = ft_lstsize(*lst);
	t_unit_tests *cur;

	while (*lst)
	{
		cur = *lst;
		failed += run_test(cur->type, cur->name, cur->fun, fptr);
		*lst = cur->next;
		free(cur);
	}
	printf("\n\033[33m%d/%d tests passed\033[0m\n\n\n", tot_test + failed, tot_test);
	fprintf(fptr, "\n%d/%d tests passed\n\n\n", tot_test + failed, tot_test);


	if (fptr)
		fclose(fptr);

	return (0);
}