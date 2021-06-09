/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:57:23 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/09 15:00:23 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

static	int	ft_check_nbr(const char **str)
{
	int	sign;

	sign = 1;
	while (**str == ' ' || **str == '\n' || **str == '\t'
		|| **str == '\v' || **str == '\f' || **str == '\r')
		*str = *str + 1;
	if (**str != '-' && **str != '+')
		return (sign);
	if (**str == '-')
		sign = -1;
	*str = *str + 1;
	return (sign);
}

int	ft_strtoi(const char *str, char **end)
{
	long	nbr;
	int		i;
	int		sign;

	nbr = 0;
	i = 0;
	sign = ft_check_nbr(&str);
	if (*end)
		*end = (char *)str;
	while (str && str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		if (nbr > INT_MAX || nbr < INT_MIN)
			return ((int)nbr);
		i++;
	}
	if (str + i == *end)
		return (0);
	*end = (char *)str + i;
	return ((int)nbr * sign);
}
