#include "../../libunit.h"

int	KO_test00();
int	OK_test00();

int	ft_strlen_launcher(void)
{
	t_unit_tests	*tmp = NULL;

	loadtest(&tmp, "KO_test00", "OK", &KO_test00);
	loadtest(&tmp, "OK_test00", "OK", &OK_test00);
	return (launchtest(&tmp))
}
