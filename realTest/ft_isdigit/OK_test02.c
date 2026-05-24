/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD:realTest/ft_isdigit/OK_test02.c
/*   OK_test02.c                                        :+:      :+:    :+:   */
=======
/*   OK_test00.c                                        :+:      :+:    :+:   */
>>>>>>> a18923b0bd22c05a43e236b6d604e992c35bf5d9:realTest/ft_isdigit/OK_test00.c
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:realTest/ft_isdigit/OK_test02.c
/*   Created: 2026/05/23 16:14:40 by francema          #+#    #+#             */
/*   Updated: 2026/05/24 15:32:09 by francema         ###   ########.fr       */
=======
/*   Created: 2026/05/23 16:14:40 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 14:06:58 by elmondo          ###   ########.fr       */
>>>>>>> a18923b0bd22c05a43e236b6d604e992c35bf5d9:realTest/ft_isdigit/OK_test00.c
/*                                                                            */
/* ************************************************************************** */

#include "../realtest.h"

int	OK_test02(void)
{
	char	s[11] = "0123456789";
	int		i = 0;
	while (s[i])
	{
		if (ft_isdigit(s[i]) != 1)
			return -1;
		i++;
	}
	return 0;
}
