/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:19:46 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/03 19:00:18 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int	check_args(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac < 2)
		return (FALSE);
	while (av[i])
	{
		if (!ft_strisdigit(av[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
