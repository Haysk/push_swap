/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:35:43 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/02 17:55:52 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int main(int argc, char **argv)
{
	argv++;
	if (check_args(argc, argv) == FALSE)
		exit(EXIT_FAILURE);
	ft_printf("check args ok\n");

	return (0);
}
