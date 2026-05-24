/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:42:07 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 19:22:25 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "realtest.h"

int	main(void)
{
	int	success;

	success = 0;
	success += ft_isalnum_launcher();
	success += ft_isalpha_launcher();
	success += ft_isdigit_launcher();
	success += ft_isprint_launcher();
	success += ft_putstr_launcher();
	success += ft_strlen_launcher();
	return (0);
}
