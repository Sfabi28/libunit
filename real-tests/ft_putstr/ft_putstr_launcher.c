/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:23 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 19:11:26 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_putstr_launcher(void)
{
	t_unit_tests	*tmp;

	tmp = NULL;
	loadtest(&tmp, "ft_putstr", "OK", &ok_test04);
	loadtest(&tmp, "ft_putstr", "OK", &ok_test09);
	loadtest(&tmp, "ft_putstr", "OK", &ok_test10);
	return (launchtest(&tmp));
}
