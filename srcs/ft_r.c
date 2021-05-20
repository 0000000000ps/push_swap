/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:15:21 by sulee             #+#    #+#             */
/*   Updated: 2021/05/20 20:26:38 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rr(t_list *s)
{
	ft_ra(&s->stack_a);
	ft_ra(&s->stack_b);
}

void	ft_ra(t_stack *stack)
{
	// t_node	*head;

	// head = stack->node;
	// stack->node = 
	stack->node = stack->node->next;

	int i = -1;
	while (++i < 3)
	{
		printf("i: %d\n", (int)stack->node->content);
		stack->node = stack->node->next;
	}
}