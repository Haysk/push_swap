/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:19:46 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/27 20:05:19 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

void	place(t_stack *stack)
{
	t_element	*tmp;

	tmp = stack->first;
	while (tmp)
	{
		if (stack->last->nbr >= tmp->nbr)
			stack->last->place++;
		else
			tmp->place++;
		tmp = tmp->next;
	}
}

int	tab_to_stack(char **tab, t_stack *stack)
{
	int		i;
	int		nbr;
	char	*end;

	i = 0;
	nbr = 0;
	end = 0;
	if (!tab)
		return (FALSE);
	while (tab[i])
	{
		nbr = ft_strtoi(tab[i], &end);
		if (tab[i] == end)
			return (FALSE);
		push_last(stack, new_elem(nbr));
		place(stack);
		i++;
	}
	return (TRUE);
}

int	args_to_stack(char **av, t_stack *stack)
{
	char	**tab;

	while (*av)
	{
		tab = ft_split(*av, ' ');
		if (!ft_tabisdigit(tab) || !tab_to_stack(tab, stack))
		{
			free_stack(stack);
			ft_freetab(tab);
			return (FALSE);
		}
		ft_freetab(tab);
		av++;
	}
	return (TRUE);
}
