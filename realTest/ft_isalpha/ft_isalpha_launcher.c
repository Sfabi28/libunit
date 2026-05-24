/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:00 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 16:29:21 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_isalpha_launcher(void)
{
	t_unit_tests	*tmp;

	tmp = NULL;
	loadtest(&tmp, "ft_isalpha_ko_test01", "KO", &ko_test01);
	loadtest(&tmp, "ft_isalpha_ok_test01", "OK", &ok_test00);
	return (launchtest(&tmp));
}
