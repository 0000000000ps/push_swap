/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:27:45 by sulee             #+#    #+#             */
/*   Updated: 2021/05/22 14:42:56 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_list *s)
{
	ft_sa(&s->stack_a);
	ft_sa(&s->stack_b);
}

// void	ft_sb()
void	ft_sa(t_stack *stack)
{
	t_node	*tmp;

	tmp->content = stack->node->content;
	stack->node->content = stack->node->next->content;
	stack->node->next->content = tmp->content;

	int i = -1;
	while (++i < 5)
	{
		printf("i: %d\n", (int)stack->node->content);
		stack->node = stack->node->next;
	}
}