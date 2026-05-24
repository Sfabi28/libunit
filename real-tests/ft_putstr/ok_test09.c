/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok_test09.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 15:50:29 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 18:23:31 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	check_output(int fd[2])
{
	char	res[6];
	int		i;

	i = 0;
	while (read(fd[0], &res[i], 1) > 0)
	{
		i++;
		if (i >= 5)
			break ;
	}
	res[i] = '\0';
	close(fd[0]);
	if (i != 5)
		return (-1);
	if (ft_strcmp(res, "hello") == 0)
		return (0);
	return (-1);
}

int	ok_test09(void)
{
	char	*str;
	int		fd[2];

	str = "hello";
	if (pipe(fd) < 0)
		return (-1);
	if (dup2(fd[1], 1) < 0)
		return (-1);
	close(fd[1]);
	ft_putstr(str);
	if (check_output(fd) < 0)
		return (-1);
	return (0);
}
