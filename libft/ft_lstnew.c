/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:29:52 by sulee             #+#    #+#             */
/*   Updated: 2020/11/30 12:48:12 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newnode;

	if (!(newnode = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
