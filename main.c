/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:35:43 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/10 00:52:28 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int	main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack stack_b;

	if (argc < 2)
		exit(my_error("../push_swap [INT] ...", 1, EXIT_FAILURE));
	init_stack(&stack_a);
	init_stack(&stack_b);
	argv++;
	if (args_to_stack(argv, &stack_a) == FALSE)
		exit(my_error("./push_swap [INT] ...", 1, EXIT_FAILURE));
	ft_printf("check args ok\n");
	swap(&stack_a);
	push(&stack_b, &stack_a);
	push(&stack_b, &stack_a);
	push(&stack_b, &stack_a);
	rotate(&stack_a);
	rotate(&stack_b);
	push(&stack_a, &stack_b);
	push(&stack_a, &stack_b);
	push(&stack_a, &stack_b);
	rrotate(&stack_a);
	print_ptr_stack(&stack_a, "A av");
	print_ptr_stack(&stack_b, "B av");
	ft_printf("\n");
	rrotate(&stack_b);
	print_ptr_stack(&stack_a, "A ap");
	print_ptr_stack(&stack_b, "B ap");
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
