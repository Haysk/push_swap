/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:47:42 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/27 17:38:21 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

void	s(t_stack *stack_a, t_stack *stack_b, char c)
{
	if (c == 'a' && stack_a)
	{
		swap(stack_a);
		ft_putstr("sa\n");
	}
	else if (c == 'b' && stack_b)
	{
		swap(stack_b);
		ft_putstr("sb\n");
	}
	else if (c == 's' && stack_a && stack_b)
	{
		swap(stack_a);
		swap(stack_b);
		ft_putstr("ss\n");
	}
}

void	p(t_stack *stack_a, t_stack *stack_b, char c)
{
	if (c == 'a' && stack_b)
	{
		push(stack_a, stack_b);
		ft_putstr("pa\n");
	}
	else if (c == 'b' && stack_a)
	{
		push(stack_b, stack_a);
		ft_putstr("pb\n");
	}
}

void	r(t_stack *stack_a, t_stack *stack_b, char c)
{
	if (c == 'a' && stack_a->first && stack_a->first->next)
	{
		rotate(stack_a);
		ft_putstr("ra\n");
	}
	else if (c == 'b' && stack_b->first && stack_b->first->next)
	{
		rotate(stack_b);
		ft_putstr("rb\n");
	}
	else if (c == 'r' && stack_a->first && stack_a->first->next
		&& stack_b->first && stack_b->first->next)
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_putstr("rr\n");
	}
}

void	rr(t_stack *stack_a, t_stack *stack_b, char c)
{
	if (c == 'a' && stack_a->first && stack_a->first->next)
	{
		rrotate(stack_a);
		ft_putstr("rra\n");
	}
	else if (c == 'b' && stack_b->first && stack_b->first->next)
	{
		rrotate(stack_b);
		ft_putstr("rrb\n");
	}
	else if (c == 'r' && stack_a->first && stack_a->first->next
		&& stack_b->first && stack_b->first->next)
	{
		rrotate(stack_a);
		rrotate(stack_b);
		ft_putstr("rrr\n");
	}
}
