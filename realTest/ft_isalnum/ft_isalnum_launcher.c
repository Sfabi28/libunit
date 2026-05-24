/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:06 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 16:30:31 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_isalnum_launcher(void)
{
	t_unit_tests	*tmp;

	tmp = NULL;
	loadtest(&tmp, "ft_isalnum_ko_test00", "KO", &ko_test00);
	loadtest(&tmp, "ft_isalnum_ok_test00", "OK", &ok_test00);
	return (launchtest(&tmp));
}
