/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:16 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 19:11:17 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_isprint_launcher(void)
{
	t_unit_tests	*tmp;

	tmp = NULL;
	loadtest(&tmp, "ft_isprint", "KO", &ko_test03);
	loadtest(&tmp, "ft_isprint", "OK", &ok_test03);
	return (launchtest(&tmp));
}
