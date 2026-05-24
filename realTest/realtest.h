/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realtest.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 16:37:27 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 17:37:40 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define REALTEST_H
#ifdef REALTEST_H

# include "../libunit.h"
# include <unistd.h>

int	ft_isalnum_launcher(void);
int	ft_isalpha_launcher(void);
int	ft_isdigit_launcher(void);
int	ft_isprint_launcher(void);
int	ft_putstr_launcher(void);
int	ft_strlen_launcher(void);

int	ko_test00(void);
int	ok_test00(void);
int	ko_test01(void);
int	ok_test01(void);
int	ko_test02(void);
int	ok_test02(void);
int	ok_test03(void);
int	ok_test04(void);
int	ko_test03(void);
int	ok_test05(void);
int	ok_test06(void);
int	ok_test07(void);
int	ok_test08(void);
int	ok_test09(void);
int	ok_test10(void);

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	ft_putstr(const char *s);
size_t	ft_strlen(const char *s);

#endif
