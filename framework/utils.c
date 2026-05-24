/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:43:39 by sfabi             #+#    #+#             */
/*   Updated: 2026/05/24 20:18:27 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libunit.h"

FILE	*open_log_file(const char *type)
{
	char	*fname;
	FILE	*fptr;

	fname = malloc(strlen(type) + 5);
	if (!fname)
		return (NULL);
	strcpy(fname, type);
	strcat(fname, ".log");
	fptr = fopen(fname, "w");
	free(fname);
	return (fptr);
}

void	free_test_node(t_unit_tests **lst)
{
	t_unit_tests	*cur;

	cur = *lst;
	*lst = cur->next;
	free(cur);
}

int	handle_test_result(int status, t_unit_tests *test, FILE *fptr)
{
	if (print_signal_result(status, test, fptr) == -1)
		return (-1);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
	{
		ft_putstr2("\033[32mOK\033[0m");
		fprintf(fptr, "%s:%s:[OK]\n", test->type, test->name);
		fflush(fptr);
		return (0);
	}
	ft_putstr2("\033[31mKO\033[0m");
	fprintf(fptr, "%s:%s:[KO]\n", test->type, test->name);
	fflush(fptr);
	return (-1);
}

int	print_signal_result(int status, t_unit_tests *test, FILE *fptr)
{
	const char	*signal_name;

	signal_name = get_signal_name(status);
	if (signal_name == NULL)
		return (0);
	ft_putstr2("\033[31m");
	ft_putstr2(signal_name);
	ft_putstr2("\033[0m");
	fprintf(fptr, "%s:%s:[%s]\n", test->type, test->name, signal_name);
	fflush(fptr);
	return (-1);
}
