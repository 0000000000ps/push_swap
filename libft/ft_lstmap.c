/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:41:06 by sulee             #+#    #+#             */
/*   Updated: 2021/05/19 15:33:52 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *))
{
	t_node *node;
	t_node *first_lst;

	if (!lst)
		return (0);
	first_lst = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&node, del);
			ft_lstclear(&first_lst, del);
			return (0);
		}
		ft_lstadd_back(&first_lst, node);
		lst = lst->next;
	}
	return (first_lst);
}
