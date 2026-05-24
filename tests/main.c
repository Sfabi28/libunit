/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:43:21 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 15:07:36 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../libunit.h"


int	ft_memcpy_launcher(void);
int	strlen_launcher(void);
int	ft_signals_launcher(void);

int	main(void)
{
	ft_memcpy_launcher();
	strlen_launcher();
	ft_signals_launcher();
	return (0);
}
