/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:06 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 15:39:06 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_isalnum_launcher(void)
{
	t_unit_tests	*tmp = NULL;

	loadtest(&tmp, "KO_test00", "KO", &KO_test00);
	loadtest(&tmp, "OK_test00", "OK", &OK_test00);
	return (launchtest(&tmp));
}
