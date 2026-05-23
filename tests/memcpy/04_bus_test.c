/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:19:36 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 18:31:01 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int bus_test(void)
{
	char buffer[8];
	int *p = (int *)(buffer + 1);
	*p = 42; // può generare SIGBUS (dipende architettura)
	return (0);
}
