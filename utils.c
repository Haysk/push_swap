/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:54:31 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/27 17:40:07 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int	have_duplicate(t_stack *stack)
{
	t_element	*current;
	t_element	*next;

	current = stack->first;
	while (current)
	{
		next = current->next;
		while (next)
		{
			if (current->nbr == next->nbr)
				return (TRUE);
			next = next->next;
		}
		current = current->next;
	}
	return (FALSE);
}

int	stack_len(t_stack *stack)
{
	int			i;
	t_element	*tmp;

	i = 0;
	tmp = stack->first;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	stack_sorted(t_stack *stack)
{
	t_element	*tmp;

	tmp = stack->first;
	while (tmp && tmp->next)
	{
		if (tmp->place > tmp->next->place)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}

int	stack_floor(t_stack *stack)
{
	int			floor;
	t_element	*tmp;

	tmp = stack->first;
	floor = 0;
	while (tmp)
	{
		if (floor < tmp->place)
			floor = tmp->place;
		tmp = tmp->next;
	}
	return (floor);
}
