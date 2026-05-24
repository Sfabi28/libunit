/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OK_test08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:realTest/ft_strlen/OK_test08.c
/*   Created: 2026/05/23 15:34:49 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 14:56:58 by francema         ###   ########.fr       */
=======
/*   Created: 2026/05/23 15:34:49 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 14:06:58 by elmondo          ###   ########.fr       */
>>>>>>> a18923b0bd22c05a43e236b6d604e992c35bf5d9:realTest/ft_strlen/OK_test02.c
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

int	OK_test08(void)
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
