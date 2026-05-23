/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:43:41 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 15:06:07 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include "../../libunit.h"

int	test_strlen_ok(void);
int	test_strlen_ko(void);

int	ft_strlen_launcher(void)
{
	t_unit_tests	*tests = NULL;

	loadtest(&tests, "STRLEN", "ok test", &test_strlen_ok);
	loadtest(&tests, "STRLEN", "ko test", &test_strlen_ko);
	return (launchtest(&tests));
}
