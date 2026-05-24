/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KO_test04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 15:50:29 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 16:44:27 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	KO_test04(void)
{
	char	*str;
	char	c;
	int		n_byt;
	int		fd[2];

	str = NULL;
	n_byt = 1;
	pipe(fd);
	if (fd < 0)
		return -1;
	if (dup2(fd[1], 1) < 0)
		return -1;
	ft_putstr(str);
	while (n_byt > 0)
	{
		n_byt = read(1, &c, 1);
		if (n_byt > 0)
			return -1;
	}
	return 0;
}
