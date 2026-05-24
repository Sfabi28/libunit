/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <sfabi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:59:35 by elmondo           #+#    #+#             */
/*   Updated: 2026/05/24 14:35:24 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libunit.h"

t_unit_tests	*ft_lstlast(t_unit_tests *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

int	ft_lstsize(t_unit_tests *lst)
{
	t_unit_tests	*new;
	int				cont;

	cont = 0;
	new = lst;
	while (new)
	{
		cont++;
		new = new->next;
	}
	return (cont);
}

void	loadtest(t_unit_tests **lst, char *type, char *name, int (*fun)(void))
{
	t_unit_tests	*new;
	t_unit_tests	*temp;

	new = calloc(1, sizeof(t_unit_tests));
	if (new == NULL)
		return ;
	new->name = name;
	new->fun = fun;
	new->type = type;
	new->next = NULL;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}
