/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:35:23 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/27 17:42:20 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

void	init_stack(t_stack *stack)
{
	stack->first = NULL;
	stack->last = NULL;
}

t_element	*new_elem(int nbr)
{
	t_element	*new;

	new = malloc(sizeof(t_element));
	if (!new)
		return (NULL);
	new->nbr = nbr;
	new->place = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	push_first(t_stack *stack, t_element *elem)
{
	if (!elem)
		return ;
	elem->next = stack->first;
	elem->prev = NULL;
	if (stack->first)
		stack->first->prev = elem;
	else
		stack->last = elem;
	stack->first = elem;
}

void	push_last(t_stack *stack, t_element *elem)
{
	if (!elem)
		return ;
	elem->next = NULL;
	elem->prev = stack->last;
	if (stack->last)
		stack->last->next = elem;
	else
		stack->first = elem;
	stack->last = elem;
}

void	free_stack(t_stack *stack)
{
	t_element	*tmp;

	while (stack->first)
	{
		tmp = stack->first->next;
		free(stack->first);
		stack->first = tmp;
	}
	stack->last = NULL;
}
