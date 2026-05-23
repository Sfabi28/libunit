/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:54:38 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 13:59:00 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_memcpy_ok(void);
int	test_memcpy_ko(void);
int	test_memcpy_segv(void);

int	ft_memcpy_launcher(void)
{
	run_test("memcpy", "ok test", &test_memcpy_ok);
	run_test("memcpy", "ko test", &test_memcpy_ko);
	run_test("memcpy", "segv test", &test_memcpy_segv);
	return (0);
}
