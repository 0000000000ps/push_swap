/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:04:24 by sulee             #+#    #+#             */
/*   Updated: 2021/05/19 20:48:20 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	예외처리 :
		중복된 값이 들어오면 바로 예외처리
*/
int		main(int ac, char **av)
{
	int			i;
	long long	value;
	t_list		s;
	t_node		*head;
	t_node		*new_node;

	ft_putstr_fd("========== push swap start ==========\n", 1);
	/* 완료 : int 범위 이상의 값이 들어오기도 할까? or 예외처리? */
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
		head = ft_lstnew(ft_atoi(av[1]));
		printf("head[1]: %d\n", head->content);
		i = 2;
		while (i < ac)
		{
			new_node = ft_lstnew(ft_atoi(av[i]));
			ft_doub_lstadd_back(&head, new_node);
			printf("content[%d]: %d\n", i, (int)new_node->content);
			i++;
		}
		if (ac > 2)
			new_node->next = head;
	}
	/* 스택A에 만든 연결 리스트 통째로 넣기 */
	s.stack_a.node = head.prev;
	/* 어떤 연산을 수행할 지 함수 고르기 */
	ft_instruction(s);
	return (0);
}

// void	ft_lstadd_back(t_list **lst, t_list *new)
// void	ft_lstclear(t_list **lst, void (*del)(void*))