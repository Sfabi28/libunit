/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:44:54 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 16:19:53 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_isdigit_launcher(void)
{
	t_unit_tests	*tmp;

	tmp = NULL;
	loadtest(&tmp, "ft_isdigit_lko_test02", "KO", &ko_test02);
	loadtest(&tmp, "ft_isdigit_lok_test02", "OK", &ok_test02);
	return (launchtest(&tmp));
}
