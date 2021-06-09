/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:20:04 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/09 22:32:49 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strisdigit(char *str)
{
	int	sign;

	sign = 0;
	if (str == NULL)
		return (FALSE);
	while (*str)
	{
		if (*str == '-')
		{
			if (sign != 0)
				return (FALSE);
			sign++;
		}
		else if (!ft_isdigit(*str))
			return (FALSE);
		str++;
	}
	return (TRUE);
}
