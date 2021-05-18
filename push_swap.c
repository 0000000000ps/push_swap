/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:04:24 by sulee             #+#    #+#             */
/*   Updated: 2021/05/18 21:44:49 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	int			i;
	t_struct	s;
	t_node		head
	t_node		new_node;

	ft_putstr_fd("hi\n", 1);
	/* 숫자가 들어오면 연결 리스트에 넣는다 */
	/*
		./push_swap 2 8 4 일 때,
		새 해드 노드 생성
		이후 노드들 추가하기
	*/
	/* int 범위 이상의 값이 들어오기도 할까? or 예외처리? */
	if (ac > 1)
	{
		head = ft_lstnew(ft_atoi(av[1]));
		i = 2;
		/* 2, 3 */
		while (ac > 1 && i < ac)
		{
			node = = ft_lstnew(ft_atoi(av[i]));
			ft_doub_lstadd_back(&head, node);
			s.node.value = atoi(av[i]);
			printf("%d\n", s.node.value);
			node->next = node;
			i++;
		}
		node->next = head;
	}
	return (0);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
void	ft_lstclear(t_list **lst, void (*del)(void*))