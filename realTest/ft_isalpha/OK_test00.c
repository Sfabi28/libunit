/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OK_test00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:34:49 by francema          #+#    #+#             */
/*   Updated: 2026/05/23 19:05:20 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libunit.h"

int	OK_test00(void)
{
	char	*s = "qwertyuiopasdfghjklzxcvbnmWERTYUIOPSDFGHJKLZXCVBNM"
	int		i = 0;
	while (s[i])
	{
		if (ft_isalpha(s[i]) != 1)
			return -1;
		i++;
	}
	return 0;
}
