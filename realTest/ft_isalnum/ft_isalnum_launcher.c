/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 13:58:07 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 14:06:58 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libunit.h"

int	KO_test00();
int	OK_test00();

void	ft_strlen_launcher(void)
{
	t_unit_tests	*tmp = NULL;

	loadtest(&tmp, "KO_test00", "OK", &OK_test00);
	loadtest(&tmp, "OK_test00", "OK", &OK_test00);
}
