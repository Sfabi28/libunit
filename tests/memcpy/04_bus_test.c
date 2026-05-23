/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:19:36 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/23 18:06:36 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int test_memcpy_sigbus(void)
{
	char src[6];
	char *dst;
	int fd;

	memcpy(src, "hello", 6);
	fd = open("/tmp/libunit_bustest", O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	dst = mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
	if (dst == MAP_FAILED)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	unlink("/tmp/libunit_bustest");
	memcpy(dst, src, 6);
	munmap(dst, 4096);
	return (0);
}