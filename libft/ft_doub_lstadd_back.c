/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doub_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 21:30:45 by sulee             #+#    #+#             */
/*   Updated: 2021/05/18 21:37:12 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_doub_lstadd_back(t_list **lst, t_list *new)
{
	t_list *node;

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
		new->next = NULL;
	}
}