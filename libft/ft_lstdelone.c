/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:37:46 by sulee             #+#    #+#             */
/*   Updated: 2021/05/19 15:33:23 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_node *lst, void (*del)(void*))
{
	t_node *tmp;

	tmp = lst->next;
	if (del)
		del(lst->content);
	free(lst);
	lst = NULL;
}
