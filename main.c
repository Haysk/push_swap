/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:35:43 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/08 15:39:17 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int	main(int argc, char **argv)
{
	argv++;
	if (check_args(argc, argv) == FALSE)
		exit(my_error("./push_swap [NUMBER] ...", 1, EXIT_FAILURE));
	ft_printf("check args ok\n");
	ft_split("fsdfa sa",' ');
	ft_printf("%i",ft_atoi("17"));
	return (0);
}
