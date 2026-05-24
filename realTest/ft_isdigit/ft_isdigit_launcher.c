/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:44:54 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 15:39:46 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_isdigit_launcher(void)
{
	t_unit_tests	*tmp = NULL;

	loadtest(&tmp, "KO_test02", "KO", &KO_test02);
	loadtest(&tmp, "OK_test02", "OK", &OK_test02);
	return (launchtest(&tmp));
}
