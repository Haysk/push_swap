/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:04:14 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/27 19:56:44 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int	close_stack(t_stack *stack_a, t_stack *stack_b, int status)
{
	free_stack(stack_a);
	free_stack(stack_b);
	return (status);
}

int	my_error(int status)
{
	write(2, "Error\n", 6);
	return (status);
}
