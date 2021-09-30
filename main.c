/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:35:43 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/27 19:54:43 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc < 2)
		return (0);
	init_stack(&stack_a);
	init_stack(&stack_b);
	argv++;
	if (args_to_stack(argv, &stack_a) == FALSE)
		exit(my_error(EXIT_FAILURE));
	if (have_duplicate(&stack_a))
		exit(my_error(close_stack(&stack_a, &stack_b, EXIT_FAILURE)));
	if (!stack_sorted(&stack_a))
	{
		if (stack_len(&stack_a) <= 3)
			algo_three(&stack_a, &stack_b);
		else if (stack_len(&stack_a) <= 5)
			algo_five(&stack_a, &stack_b);
		else
			radix_sort(&stack_a, &stack_b);
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
