/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:41:06 by sulee             #+#    #+#             */
/*   Updated: 2020/10/23 19:21:29 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *node;
	t_list *first_lst;

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
