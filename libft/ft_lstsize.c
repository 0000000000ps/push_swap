/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:34:55 by sulee             #+#    #+#             */
/*   Updated: 2020/10/20 19:28:51 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*curr;

	if (lst == NULL)
		return (0);
	i = 1;
	curr = lst->next;
	while (curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}
