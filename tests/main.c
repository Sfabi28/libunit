/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:43:21 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 13:58:01 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_putstr(const char *s)
{
	write(1, s, strlen(s));
}

void	run_test(const char *func, const char *name, int (*f)(void))
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid == 0)
		exit(f() != 0);
	waitpid(pid, &status, 0);
	ft_putstr(func);
	ft_putstr(":");
	ft_putstr(name);
	ft_putstr(":[");
	if (WIFSIGNALED(status) && WTERMSIG(status) == SIGSEGV)
		ft_putstr("SIGSEGV");
	else if (WEXITSTATUS(status) == 0)
		ft_putstr("OK");
	else
		ft_putstr("KO");
	ft_putstr("]\n");
}

int	ft_memcpy_launcher(void);
int	ft_strlen_launcher(void);

int	main(void)
{
	ft_memcpy_launcher();
	ft_strlen_launcher();
	return (0);
}
