/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:54:31 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/10 00:32:09 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int		stack_len(t_stack *stack)
{
	int	i;
	t_element *tmp;

	i = 0;
	tmp = stack->first;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	print_stack(t_stack *stack_a, t_stack *stack_b)
{
	int	len_a;
	int	len_b;
	t_element *tmp_a;
	t_element *tmp_b;
	
	len_a = stack_len(stack_a);
	len_b = stack_len(stack_b);
	tmp_a = stack_a->first;
	tmp_b = stack_b->first;
	ft_printf("--------------------------------\n");
	if (tmp_a)
	ft_printf("A : %p : %p : %p\n", tmp_a->prev, tmp_a, tmp_a->next);
	if (tmp_b)
	ft_printf("B : %p : %p : %p\n", tmp_b->prev, tmp_b, tmp_b->next);
	while (len_a > 0 || len_b > 0)
	{
		if (tmp_a && tmp_b)
		{
			ft_printf("%i : %-10i     %i : %i\n", tmp_a->place, tmp_a->nbr, tmp_b->place, tmp_b->nbr);
			tmp_a = tmp_a->next;
			tmp_b = tmp_b->next;
		}
		else if (tmp_a && !tmp_b)
		{
			ft_printf("%i : %-10i\n", tmp_a->place, tmp_a->nbr);
			tmp_a = tmp_a->next;
		}
		else
		{
			ft_printf("%20i : %i\n", tmp_b->place, tmp_b->nbr);
			tmp_b = tmp_b->next;
		}
		len_a--;
		len_b--;
	}
	ft_printf("--------------------------------\n");
}

void	print_ptr_stack(t_stack *stack, char *str)
{
	t_element *tmp;

	tmp = stack->first;
	ft_printf("%s : first %-15p : last %-15p\n", str, stack->first, stack->last);
	while (tmp)
	{
		ft_printf("prev %-15p : %-15p : next %-15p\n", tmp->prev, tmp, tmp->next);
		tmp = tmp->next;
	}
}
