/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:05:50 by sulee             #+#    #+#             */
/*   Updated: 2021/05/22 20:40:46 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "./libft/libft.h"

// typedef struct		s_node
// {
// 	int				value;
// 	t_node			*prev;
// 	t_node			*next;
// }					t_node;

typedef struct		s_stack
{
	t_node			*node;
	t_node			*tail;
	t_node			*head;
}					t_stack;

typedef struct		s_list
{
	t_stack			stack_a;
	t_stack			stack_b;
	int				size;
}					t_list;

/*
** instructions
*/
void	ft_sa(t_stack *stack);
void	ft_ra(t_stack *stack, t_list *s);
void	ft_rra(t_stack *stack, t_list *s);

void	display(t_node *head);
int		ft_error(char *error_msg);

#endif