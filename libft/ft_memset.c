/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:18:17 by sulee             #+#    #+#             */
/*   Updated: 2020/12/02 19:12:18 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (b);
	while (i < len)
	{
		*((unsigned char*)b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
