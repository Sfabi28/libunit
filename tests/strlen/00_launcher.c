/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:43:41 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 13:56:01 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_strlen_ok(void);
int	test_strlen_ko(void);

int	ft_strlen_launcher(void)
{
	run_test("strlen", "ok test", &test_strlen_ok);
	run_test("strlen", "ko test", &test_strlen_ko);
	return (0);
}
