/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:35:43 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/08 17:15:43 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int	main(int argc, char **argv)
{
	argv++;
	if (check_args(argc, argv) == FALSE)
		exit(my_error("./push_swap [NUMBER] ...", 1, EXIT_FAILURE));
	ft_printf("check args ok\n");
	return (0);
}
