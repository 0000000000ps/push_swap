/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:36:22 by sulee             #+#    #+#             */
/*   Updated: 2021/05/19 15:32:59 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
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
		new->next = NULL;
	}
}
