/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok_test10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 15:50:29 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 19:06:24 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ok_test10(void)
{
	char	*str;
	int		fd[2];
	char	c;

	str = NULL;
	if (pipe(fd) < 0)
		return (-1);
	if (dup2(fd[1], 1) < 0)
		return (-1);
	close(fd[1]);
	ft_putstr(str);
	close(1);
	if (read(fd[0], &c, 1) > 0)
	{
		close(fd[0]);
		return (-1);
	}
	close(fd[0]);
	return (0);
}
