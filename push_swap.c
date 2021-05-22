/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:04:24 by sulee             #+#    #+#             */
/*   Updated: 2021/05/22 21:00:30 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack_b(t_list *s)
{
	t_node		*head;
	t_node		*new_node;
	int			i;

	head = ft_lstnew("");//stack B head 생성 & 초기화
	if (s->size > 2)
	{
		i = 1;
		while (i < s->size)
		{
			new_node = ft_lstnew("");//stack B node 생성 & 초기화
			ft_doub_lstadd_back(&head, new_node);
			printf("content[%d]: %s\n", i, new_node->content);
			i++;
		}
	}
}
/*
	예외처리 :
		중복된 값이 들어오면 바로 예외처리
*/
int		main(int ac, char **av)
{
	int			i;
	long long	value;
	t_list		s;
	t_node		*new_node;

	i = 0;
	while (++i < ac)
	{
		int j = -1;
		while (av[i][++j])
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
				ft_error("Error\n");
		value = ft_atoi(av[i]);
		if (value < -2147483648 || value > 2147483647)
			ft_error("Error\n");
	}
	if (ac > 1)
	{
		s.stack_a.head = ft_lstnew(ft_atoi(av[1]));
		printf("head[1]: %d %p\n", (int)s.stack_a.head->content, s.stack_a.head);
		i = 2;
		s.size = 1;
		while (i < ac)
		{
			printf("?1\n");
			new_node = ft_lstnew(ft_atoi(av[i]));
			printf("?2 %s\n", av[i]);
			ft_doub_lstadd_back(s.stack_a.head, new_node);
			printf("?3????\n");
			// printf("content[%d]: %d\n", i, (int)s.stack_a.node->content);
			printf("?4\n");
			if (i == ac - 1)
			{
				printf(".....%d\n", s.stack_a.node->next->content);
				s.stack_a.tail = s.stack_a.node->next;
			}
			// s.stack_a.node = s.stack_a.node->next;
			i++;
			s.size++;
		}
		printf("-------------------\n");
		int j = 0;//=====================================test
		while (j < 5)
		{
			printf("실제값 %d %p\n", (int)s.stack_a.tail->content, s.stack_a.node);
			j++;
			s.stack_a.node->next = s.stack_a.node->next->next;
		}
		printf("-------------------\n");
		init_stack_b(&s);
	}
	printf("size: %d\n", s.size);
	/* 어떤 연산을 수행할 지 함수 고르기 */
	ft_sa(&s.stack_a);
	// ft_instruction(s);
	return (0);
}