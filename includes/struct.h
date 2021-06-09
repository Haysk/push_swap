/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:14:55 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/09 21:51:57 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_element
{
	int		nbr;
	int		place;
	struct s_element	*prev;
	struct s_element	*next;
}	t_element;

typedef struct s_stack
{
	t_element	*first;
	t_element	*last;
}	t_stack;


#endif
