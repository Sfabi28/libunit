/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:54:38 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 18:34:30 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include "../../libunit.h"

int	test_memcpy_ok(void);
int	test_memcpy_ko(void);
int	test_memcpy_segv(void);
int bus_test(void);

int ft_memcpy_launcher(void)
{
	t_unit_tests	*tests = NULL;

	loadtest(&tests, "MEMCPY", "ok test", &test_memcpy_ok);
	loadtest(&tests, "MEMCPY", "ko test", &test_memcpy_ko);
	loadtest(&tests, "MEMCPY", "segv test", &test_memcpy_segv);
	loadtest(&tests, "MEMCPY", "sigbus test", &bus_test);

	return (launchtest(&tests));
}
