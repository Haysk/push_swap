/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:54:31 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/14 14:13:37 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int		stack_len(t_stack *stack)
{
	int	i;
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

int		stack_sorted(t_stack *stack)
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

void	print_stack(t_stack *stack, char *str)
{
	t_element *tmp;

	tmp = stack->first;
	ft_printf("%s : first %-15i : last %-15i\n", str, stack->first, stack->last);
	while (tmp)
	{
		ft_printf("prev %-15i : %-15i : next %-15i\n", tmp->prev, tmp, tmp->next);
		tmp = tmp->next;
	}
}
