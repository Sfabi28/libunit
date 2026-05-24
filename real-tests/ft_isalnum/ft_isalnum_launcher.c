/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:06 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 19:10:56 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_isalnum_launcher(void)
{
	t_unit_tests	*tmp;

	tmp = NULL;
	loadtest(&tmp, "ft_isalnum", "KO", &ko_test00);
	loadtest(&tmp, "ft_isalnum", "OK", &ok_test00);
	return (launchtest(&tmp));
}
