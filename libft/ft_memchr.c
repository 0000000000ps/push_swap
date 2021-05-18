/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:43:02 by sulee             #+#    #+#             */
/*   Updated: 2020/10/23 21:52:13 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		if (tmp[i] == c)
			break ;
		i++;
	}
	if (i == n)
		return (NULL);
	return (tmp + i);
}
