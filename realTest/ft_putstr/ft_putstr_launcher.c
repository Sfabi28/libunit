/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:23 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 16:19:28 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int ft_putstr_launcher(void)
{
	t_unit_tests *tmp;

	tmp = NULL;
	loadtest(&tmp, "ft_putstr_ko_test04", "KO", &ok_test04);
	loadtest(&tmp, "ft_putstr_ok_test04", "OK", &ok_test04);
	return (launchtest(&tmp));
}
