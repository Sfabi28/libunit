/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:44:28 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 16:35:47 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include "tests/tests.h"

typedef struct s_unit_tests
{
	char			*name;
	char			*type;
	int				(*fun)(void);
	int				fd[2];
	struct s_unit_tests	*next;
}	t_unit_tests;

void	loadtest(t_unit_tests **lst, char *type, char *name, int (*fun)(void));
int		launchtest(t_unit_tests **lst);
t_unit_tests		*ft_lstlast(t_unit_tests *lst);
int			ft_lstsize(t_unit_tests *lst);
void		ft_putstr(const char *s);
const char		*get_signal_name(int status);
void						run_test_child(int (*f)(void));
int					run_test(const char *func, const char *name,
					int (*f)(void), FILE *fptr);
FILE					*open_log_file(const char *type);
void					free_test_node(t_unit_tests **lst);
int				handle_test_result(int status, const char *func,
					const char *name, FILE *fptr);
int				print_signal_result(int status, const char *func,
					const char *name, FILE *fptr);
#endif
