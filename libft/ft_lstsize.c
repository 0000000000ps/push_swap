/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:34:55 by sulee             #+#    #+#             */
/*   Updated: 2021/05/19 15:34:07 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_node *lst)
{
	int		i;
	t_node	*curr;

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
