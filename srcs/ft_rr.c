/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:27:26 by sulee             #+#    #+#             */
/*   Updated: 2021/05/22 15:01:46 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr(t_list *s)
{
	ft_rra(&s->stack_a, s);
	ft_rra(&s->stack_b, s);
}

void	ft_rra(t_stack *stack, t_list *s)
{
	// t_node	*head;

	// head = stack->node;
	// stack->node = 
	stack->node->next = stack->node;

	int i = -1;
	while (++i < 5)
	{
		printf("[rra] i: %d\n", (int)stack->node->content);
		stack->node = stack->node->next;
	}
}