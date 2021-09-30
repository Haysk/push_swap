/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:54:12 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/27 17:39:18 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int	algo_three(t_stack *stack_a, t_stack *stack_b)
{
	int	floor;

	floor = stack_floor(stack_a);
	if (stack_sorted(stack_a))
		return (TRUE);
	if (stack_a->last->place == floor)
		s(stack_a, stack_b, 'a');
	else if (stack_a->first->place == floor)
		r(stack_a, stack_b, 'a');
	else
		rr(stack_a, stack_b, 'a');
	algo_three(stack_a, stack_b);
	return (TRUE);
}

int	algo_five(t_stack *stack_a, t_stack *stack_b)
{
	t_element	*tmp;

	while (stack_len(stack_a) != 3)
	{
		tmp = stack_a->first;
		if (tmp->place == 3 || tmp->place == 4)
			rr(stack_a, stack_b, 'a');
		if (tmp->place != 3 && tmp->place != 4)
			p(stack_a, stack_b, 'b');
	}
	algo_three(stack_a, stack_b);
	while (stack_len(stack_b))
	{
		p(stack_a, stack_b, 'a');
		if (stack_a->first->place == stack_a->first->next->place + 1)
			s(stack_a, stack_b, 'a');
		else if (stack_a->first->place == stack_a->last->place + 1)
			r(stack_a, stack_b, 'a');
	}
	return (TRUE);
}

int	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int			i;
	int			bit_len;
	int			stacklen;

	bit_len = 0;
	stacklen = stack_len(stack_a);
	while ((stacklen >> bit_len) != 0)
	{
		i = 0;
		while (i < stacklen)
		{
			if (((stack_a->first->place >> bit_len) & 1) == 0)
				p(stack_a, stack_b, 'b');
			else
				r(stack_a, stack_b, 'a');
			i++;
		}
		while (stack_b->first)
			p(stack_a, stack_b, 'a');
		bit_len++;
	}
	return (TRUE);
}
