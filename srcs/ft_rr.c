/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:27:26 by sulee             #+#    #+#             */
/*   Updated: 2021/05/20 20:34:48 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr(t_list *s)
{
	ft_rra(&s->stack_a);
	ft_rra(&s->stack_b);
}

void	ft_rra(t_stack *stack)
{
	// t_node	*head;

	// head = stack->node;
	// stack->node = 
	stack->node = stack->node->prev;

	int i = -1;
	while (++i < 3)
	{
		printf("i: %d\n", (int)stack->node->content);
		stack->node = stack->node->next;
	}
}