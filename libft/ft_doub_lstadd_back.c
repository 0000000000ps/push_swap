/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doub_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 21:30:45 by sulee             #+#    #+#             */
/*   Updated: 2021/05/20 20:33:57 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_doub_lstadd_back(t_node **lst, t_node *new)
{
	t_node *node;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
	}
	if (*lst)
	{
		node = *lst;
		while (node->next)
			node = node->next;
		node->next = new;
		new->prev = node;//이중 리스트용. 코드 한 줄 추가
		new->next = *lst;
	}
}