/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:19:46 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/08 15:34:33 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int	check_args(int ac, char **av)
{
	int	i;
	// int	j;
	// char	**str;

	i = 0;
	// j = 0;
	if (ac < 2)
		return (FALSE);
	while (av[i])
	{
		// str = ft_split(av[i], ' ');
		// while (str[j])
		// {
			if (!ft_strisdigit(av[i]))
				return (FALSE);
		// 	j++;
		// }
		i++;
	}
	return (TRUE);
}
