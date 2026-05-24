#ifndef REALTEST_H
#define REALTEST_H

#include "../libunit.h"
#include <unistd.h>

int	ft_isalnum_launcher(void);
int	ft_isalpha_launcher(void);
int	ft_isdigit_launcher(void);
int	ft_isprint_launcher(void);
int	ft_putstr_launcher(void);
int	ft_strlen_launcher(void);

int	KO_test00(void);
int	OK_test00(void);
int	KO_test01(void);
int	OK_test01(void);
int	KO_test02(void);
int	OK_test02(void);
int	OK_test03(void);
int	KO_test03(void);
int	OK_test05(void);
int	OK_test06(void);
int	OK_test07(void);
int	OK_test08(void);

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		ft_putstr(const char *s);
size_t		ft_strlen(const char *s);


#endif
