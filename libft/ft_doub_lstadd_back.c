/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doub_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 21:30:45 by sulee             #+#    #+#             */
/*   Updated: 2021/05/22 18:21:24 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_node		*ft_doub_lstadd_back(t_node **lst, t_node *new)
{
	t_node *node;

	node = NULL;
	if (new == NULL)
		return (*lst);
	if (*lst == NULL)
	{
		*lst = new;
		new->next = new;
	}
	if (*lst)
	{
		node = *lst;
		
		while (node->next != *lst)
			node = node->next;
		node->next = new;
		node->prev = new;
		new->prev = node;
		new->next = node;
	}
	return (new);
}