/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok_test10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 15:50:29 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 18:14:58 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int ok_test10(void)
{
	char *str = NULL;
	int fd[2];
	char c;

	if (pipe(fd) < 0)
		return -1;
	if (dup2(fd[1], 1) < 0)
		return -1;
	close(fd[1]);
	ft_putstr(str);
	close(1);
	if (read(fd[0], &c, 1) > 0)
	{
		close(fd[0]);
		return -1;
	}
	close(fd[0]);
	return 0;
}
