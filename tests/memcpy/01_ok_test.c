/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:19:27 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 14:06:58 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_memcpy_ok(void)
{
	char	src[6];
	char	dst[6];

	memset(src, 0, 6);
	memset(dst, 0, 6);
	memcpy(src, "hello", 6);
	memcpy(dst, src, 6);
	if (memcmp(dst, "hello", 6) == 0)
		return (0);
	return (-1);
}
