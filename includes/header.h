/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:56:11 by adylewsk          #+#    #+#             */
/*   Updated: 2021/09/27 19:54:30 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "../libft/libft.h"
# include "struct.h"

int			check_args(int ac, char **av);
int			my_error(int status);
void		init_stack(t_stack *list);
t_element	*new_elem(int nbr);
void		push_first(t_stack *stack, t_element *elem);
void		push_last(t_stack *stack, t_element *elem);
int			args_to_stack(char **av, t_stack *stack);
void		free_stack(t_stack *list);
int			close_stack(t_stack *stack_a, t_stack *stack_b, int status);
void		swap(t_stack *stack);
void		push(t_stack *stack_a, t_stack *stack_b);
void		rotate(t_stack *stack);
void		rrotate(t_stack *stack);
void		s(t_stack *stack_a, t_stack *stack_b, char c);
void		p(t_stack *stack_a, t_stack *stack_b, char c);
void		r(t_stack *stack_a, t_stack *stack_b, char c);
void		rr(t_stack *stack_a, t_stack *stack_b, char c);
int			algo_three(t_stack *stack_a, t_stack *stack_b);
int			algo_five(t_stack *stack_a, t_stack *stack_b);
int			radix_sort(t_stack *stack_a, t_stack *stack_b);
int			have_duplicate(t_stack *stack);
int			stack_floor(t_stack *stack);
int			stack_sorted(t_stack *stack);
int			stack_len(t_stack *stack);

#endif
