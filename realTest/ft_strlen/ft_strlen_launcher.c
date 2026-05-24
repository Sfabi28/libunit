/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:45:35 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 16:16:13 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ft_strlen_launcher(void)
{
	t_unit_tests	*tmp;

	tmp = NULL;
	loadtest(&tmp, "ft_strlen_ok_test05", "OK", ok_test05);
	loadtest(&tmp, "ft_strlen_ok_test06", "OK", ok_test06);
	loadtest(&tmp, "ft_strlen_ok_test07", "OK", ok_test07);
	loadtest(&tmp, "ft_strlen_ok_test08", "OK", ok_test08);
	return (launchtest(&tmp));
}
