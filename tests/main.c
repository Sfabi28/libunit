/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:43:21 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 14:08:31 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../libunit.h"

int	ft_memcpy_launcher(void);
int	ft_strlen_launcher(void);
int	ft_signals_launcher(void);

int	main(void)
{
	ft_memcpy_launcher();
	ft_strlen_launcher();
	ft_signals_launcher();
	return (0);
}
