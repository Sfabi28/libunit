/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OK_test08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:34:49 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 16:15:23 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

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

int	ok_test08(void)
{
	size_t	size;
	char	*str;

	str = malloc(size + 1);
	size = 2147483647;
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
