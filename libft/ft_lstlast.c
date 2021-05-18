/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:35:42 by sulee             #+#    #+#             */
/*   Updated: 2020/10/23 22:47:14 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *lastnode;

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
