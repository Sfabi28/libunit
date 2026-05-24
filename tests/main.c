/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:16:53 by sfabi             #+#    #+#             */
/*   Updated: 2026/05/24 18:17:10 by sfabi            ###   ########.fr       */
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
