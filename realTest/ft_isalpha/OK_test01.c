/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OK_test01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:34:49 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 16:30:12 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	ok_test01(void)
{
	char	*s;
	int		i;

	i = 0;
	s = "qwertyuiopasdfghjklzxcvbnmWERTYUIOPSDFGHJKLZXCVBNM";
	while (s[i])
	{
		if (ft_isalpha(s[i]) != 1)
			return (-1);
		i++;
	}
	return (0);
}
