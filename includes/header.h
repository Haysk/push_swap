/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:56:11 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/10 00:01:26 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H


# include "../libft/libft.h"
# include "struct.h"

int	check_args(int ac, char **av);
int	my_error(char *error_str, int error, int status);

/* List */
void		init_stack(t_stack *list);
t_element	*new_elem(int nbr);
void		push_first(t_stack *stack, t_element *elem);
void		push_last(t_stack *stack, t_element *elem);
int			args_to_stack(char **av, t_stack *stack);
void		print_stack(t_stack *stack_a, t_stack *stack_b);
void		free_stack(t_stack *list);

void		swap(t_stack *stack);
void		push(t_stack *stack_a, t_stack *stack_b);
void		rotate(t_stack *stack);
void		rrotate(t_stack *stack);

void	print_ptr_stack(t_stack *stack, char *str);




#endif
