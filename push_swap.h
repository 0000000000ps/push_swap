/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:05:50 by sulee             #+#    #+#             */
/*   Updated: 2021/05/18 21:21:58 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "./libft/libft.h"

typedef struct		s_node
{
	int				value;
	t_node			*prev;
	t_node			*next;
}					t_node;

typedef struct		s_stack;
{
	t_node			node;
}					t_stack;

typedef struct		s_struct
{
	t_stack			stack_a;
	t_stack			stack_b;
	t_node			node;
	int				size;
}					t_struct;

#endif