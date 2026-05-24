/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok_test04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 15:50:29 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 17:38:09 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int ok_test04(void)
{
	char *str;
	int fd[2];
	char c;
	int	n_byt;

	str = "";
	n_byt = 1;
	if (pipe(fd) < 0)
		return (-1);
	if (dup2(fd[1], 1) < 0)
		return (-1);
	close(fd[1]);
	ft_putstr(str);
	while (n_byt > 0)
	{
		n_byt = read(fd[0], &c, 1);
		if (n_byt > 0)
		{
			close(fd[0]);
			return (-1);
		}
	}
	close(fd[0]);
	return (0);
}
