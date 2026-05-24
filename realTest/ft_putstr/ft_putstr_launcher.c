/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:23 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 17:11:16 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int ft_putstr_launcher(void)
{
	t_unit_tests *tmp;

	tmp = NULL;
	loadtest(&tmp, "ft_putstr_ok_test04", "OK", &ok_test04);
	loadtest(&tmp, "ft_putstr_ok_test09", "OK", &ok_test09);
	loadtest(&tmp, "ft_putstr_ko_test10", "OK", &ok_test10);
	return (launchtest(&tmp));
}
