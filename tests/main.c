/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2026/05/24 15:38:05 by francema         ###   ########.fr       */
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
