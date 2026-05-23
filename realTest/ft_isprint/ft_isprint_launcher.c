#include "../../libunit.h"

void	ft_isprint_launcher(void)
{
	t_unit_tests	*tmp = NULL;

	loadtest(&tmp, "OK_test00", "OK", OK_test00);
	loadtest(&tmp, "OK_test01", "OK", OK_test01);
	loadtest(&tmp, "OK_test02", "OK", OK_test02);
	loadtest(&tmp, "OK_test03", "OK", OK_test03);
}
