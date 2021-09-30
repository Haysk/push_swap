/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 19:00:09 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/21 19:20:32 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tabisdigit(char **tab)
{
	if (tab == NULL)
		return (FALSE);
	while (*tab)
	{
		if (!ft_strisdigit(*tab))
			return (FALSE);
		tab++;
	}
	return (TRUE);
}
