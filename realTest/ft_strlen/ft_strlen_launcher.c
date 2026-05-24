/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:35 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 15:37:27 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_strlen_launcher(void)
{
	t_unit_tests	*tmp = NULL;

	loadtest(&tmp, "OK_test05", "OK", OK_test05);
	loadtest(&tmp, "OK_test06", "OK", OK_test06);
	loadtest(&tmp, "OK_test07", "SIGSEGV", OK_test07);
	loadtest(&tmp, "OK_test08", "OK", OK_test08);
	return (launchtest(&tmp));
}
