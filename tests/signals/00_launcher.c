/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:43:41 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 12:37:56 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include "../../libunit.h"

int	test_abort(void);
int	test_sigfpe(void);
int	test_sigpipe(void);
int	test_sigill(void);
int	test_sigalrm(void);



int	ft_signals_launcher(void)
{
	t_unit_tests	*tests = NULL;

	loadtest(&tests, "SIGNAL", "test abort", &test_abort);
	loadtest(&tests, "SIGNAL", "test sigfpe", &test_sigfpe);
	loadtest(&tests, "SIGNAL", "test sigpipe", &test_sigpipe);
	loadtest(&tests, "SIGNAL", "test sigill", &test_sigill);
	loadtest(&tests, "SIGNAL", "test timeout", &test_sigalrm);


	return (launchtest(&tests));
}
