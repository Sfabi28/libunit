/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_segv_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:19:35 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 13:52:48 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_memcpy_segv(void)
{
	char			src[6];
	void *volatile	dst;

	dst = NULL;
	memcpy(dst, src, 6);
	return (0);
}
