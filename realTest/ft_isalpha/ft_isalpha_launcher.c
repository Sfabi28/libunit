#include "../../libunit.h"

void	ft_strlen_launcher(void)
{
	t_unit_tests	*tmp = NULL;

	loadtest(&tmp, "KO_test00", "OK", &OK_test00);
	loadtest(&tmp, "OK_test00", "OK", &OK_test00);
}
