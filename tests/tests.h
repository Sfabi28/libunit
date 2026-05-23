/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:44:26 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 13:44:27 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/mman.h>
# include <sys/wait.h>
# include <fcntl.h>
# include <unistd.h>

void	ft_putstr(const char *s);
void	run_test(const char *func, const char *name, int (*f)(void));

#endif
