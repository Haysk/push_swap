/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:35:43 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/14 15:15:44 by adylewsk         ###   ########.fr       */
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
	if (stack_sorted(&stack_a))
		close(&stack_a, &stack_b);
	if (stack_len(&stack_a) <= 3)
	{
		algo_three(&stack_a, &stack_b, stack_len(&stack_a));
	}
	// else if (stack_len(&stack_a) <= 5)
	// {
	// 	algo_five();
	// }
	// else if (stack_len(&stack_a) <= 100)
	// {
	// 	algo_five();
	// }
	// else if (stack_len(&stack_a) <= 500)
	// {
	// 	algo_five();
	// }
	ft_printf("check args ok\n");
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
