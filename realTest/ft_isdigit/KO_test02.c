/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KO_test02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:realTest/ft_isdigit/KO_test02.c
/*   Created: 2026/05/23 15:34:49 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 15:31:08 by francema         ###   ########.fr       */
=======
/*   Created: 2026/05/23 15:34:49 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 14:06:58 by elmondo          ###   ########.fr       */
>>>>>>> a18923b0bd22c05a43e236b6d604e992c35bf5d9:realTest/ft_isdigit/KO_test00.c
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	KO_test02(void)
{
	int arr[128];
	int i = 0;
	int j = 0;

	while (i < 128)
	{
		if (!(i >= '0' && i <= '9'))
			arr[j++] = i;
		i++;
	}
	while (--j >= 0)
	{
		if (ft_isdigit(arr[j]) != 0)
			return -1;
	}
	return 0;
}
