/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:44:28 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 14:06:58 by elmondo          ###   ########.fr       */
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
	struct s_unit_tests	*next;
}	t_unit_tests;

void	loadtest(t_unit_tests **lst, char *type, char *name, int (*fun)(void));
int		launchtest(t_unit_tests **lst);
int		ft_lstsize(t_unit_tests *lst);



#endif
