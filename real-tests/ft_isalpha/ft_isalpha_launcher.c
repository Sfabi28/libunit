/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:00 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 19:32:11 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_isalpha_launcher(void)
{
	t_unit_tests	*tmp;

	tmp = NULL;
	loadtest(&tmp, "ft_isalpha", "KO", &ko_test01);
	loadtest(&tmp, "ft_isalpha", "OK", &ok_test01);
	return (launchtest(&tmp));
}
