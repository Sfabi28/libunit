/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:19:33 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 13:49:28 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_memcpy_ko(void)
{
	char	src[6];
	char	dst[6];

	memset(src, 0, 6);
	memcpy(src, "hello", 6);
	memcpy(dst, src, 6);
	if (dst[0] == 'z')
		return (0);
	return (-1);
}
