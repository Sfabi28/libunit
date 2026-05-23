#include "../../libunit.h"

void	ft_isprint_launcher(void)
{
	t_unit_tests	*tmp = NULL;

	loadtest(&tmp, "OK_test00", "OK", &OK_test00);
	loadtest(&tmp, "KO_test00", "OK", &KO_test00);
}
