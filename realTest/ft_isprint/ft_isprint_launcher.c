/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:16 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 14:55:21 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_isprint_launcher(void)
{
	t_unit_tests	*tmp = NULL;

	loadtest(&tmp, "KO_test03", "KO", &KO_test03);
	loadtest(&tmp, "OK_test03", "OK", &OK_test03);
	return (launchtest(&tmp));
}
