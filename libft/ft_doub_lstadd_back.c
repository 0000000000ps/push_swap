/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doub_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 21:30:45 by sulee             #+#    #+#             */
/*   Updated: 2021/05/22 20:52:06 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>	

void	ft_doub_lstadd_back(t_node **lst, t_node *new)
{
	t_node *node;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = new;
	}
	if (*lst)
	{
		node = *lst;
		
		int i = 0;
		while (node->next != *lst)
		{
			printf("혹시 %d\n", i);
			node = node->next;
			i++;
			sleep(1);
		}
		node->next = new;
		// node->prev = new;
		// new->prev = node;
		new->next = node;
	}
}