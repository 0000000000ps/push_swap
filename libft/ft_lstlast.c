/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:35:42 by sulee             #+#    #+#             */
/*   Updated: 2021/05/19 15:33:41 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstlast(t_node *lst)
{
	t_node *lastnode;

	if (lst)
	{
		lastnode = lst;
		while (lastnode)
		{
			if (lastnode->next == NULL)
				return (lastnode);
			lastnode = lastnode->next;
		}
	}
	return (0);
}
