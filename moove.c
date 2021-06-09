/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moove.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:47:42 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/10 00:39:53 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

void	swap(t_stack *stack)
{
	t_element *tmp;
	
	if (!stack->first->next)
		return;
	tmp = stack->first->next;
	if (stack->first->next->next)
	{
		stack->first->next->next->prev = stack->first;
		stack->first->next = stack->first->next->next;
	}
	else
	{
		stack->last = stack->first;
		stack->first->next = NULL;
	}
	push_first(stack, tmp);
}

void	push(t_stack *stack_a, t_stack *stack_b)
{
	t_element *tmp;
	if (!stack_b->first)
		return;
	tmp = stack_b->first;
	stack_b->first = stack_b->first->next;
	if(stack_b->first)
		stack_b->first->prev = NULL;
	else
		stack_b->last = NULL;
	push_first(stack_a, tmp);
}

void	rotate(t_stack *stack)
{
	t_element *tmp;

	if (!stack->first || !stack->first->next)
		return;
	tmp = stack->first;
	stack->first = stack->first->next;
	stack->first->prev = NULL;
	push_last(stack, tmp);
}

void	rrotate(t_stack *stack)
{
	t_element *tmp;
	if (!stack->last || !stack->last->prev)
		return;
	tmp = stack->last;
	stack->last = stack->last->prev;
	stack->last->next = NULL;
	push_first(stack, tmp);
}
