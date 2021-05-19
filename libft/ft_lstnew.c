/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:29:52 by sulee             #+#    #+#             */
/*   Updated: 2021/05/19 15:52:19 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstnew(void *content)
{
	t_node *newnode;

	if (!(newnode = (t_node *)malloc(sizeof(t_node))))
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
