/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:42:07 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 16:43:55 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "realtest.h"

int	main(void)
{
	int	total;
	int	success;

	success = 0;
	total = 0;
	success += ft_isalnum_launcher();
	total++;
	success += ft_isalpha_launcher();
	total++;
	success += ft_isdigit_launcher();
	total++;
	success += ft_isprint_launcher();
	total++;
	// success += ft_putstr_launcher();
	// total++;
	success += ft_strlen_launcher();
	total++;
	if (success == total)
		return (0);
	return (-1);
}
