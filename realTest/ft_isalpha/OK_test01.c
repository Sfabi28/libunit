/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OK_test01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:realTest/ft_isalpha/OK_test01.c
/*   Created: 2026/05/23 15:34:49 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 14:56:30 by francema         ###   ########.fr       */
=======
/*   Created: 2026/05/23 15:34:49 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 14:06:58 by elmondo          ###   ########.fr       */
>>>>>>> a18923b0bd22c05a43e236b6d604e992c35bf5d9:realTest/ft_strlen/OK_test01.c
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	OK_test01(void)
{
	char	*s = "qwertyuiopasdfghjklzxcvbnmWERTYUIOPSDFGHJKLZXCVBNM";
	int		i = 0;
	while (s[i])
	{
		if (ft_isalpha(s[i]) != 1)
			return -1;
		i++;
	}
	return 0;
}
