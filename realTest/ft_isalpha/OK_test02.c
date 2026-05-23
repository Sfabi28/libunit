/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OK_test02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:34:49 by francema          #+#    #+#             */
/*   Updated: 2026/05/23 16:04:32 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libunit.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

int OK_test02(void)
{
	size_t size = 2147483647;//int_max
	char *str = malloc(size + 1);

	if (!str)
		return (-1);
	memset(str, 'a', size);
	str[size] = '\0';
	if (ft_strlen(str) == size)
	{
		free(str);
		return (0);
	}
	free(str);
	return (-1);
}
