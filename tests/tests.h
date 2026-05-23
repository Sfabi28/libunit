/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:44:26 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 14:43:54 by sfabi            ###   ########.fr       */
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
int		run_test(const char *func, const char *name, int (*f)(void));

#endif
