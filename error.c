/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:37:27 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/08 15:01:39 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

int	my_error(char *error_str, int error, int status)
{
	ft_printf("ERROR %i\n%s",error, error_str);
	return (status);
}
