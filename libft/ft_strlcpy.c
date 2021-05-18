/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 11:25:38 by sulee             #+#    #+#             */
/*   Updated: 2020/10/20 19:35:29 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int len;

	len = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (dstsize == 0)
	{
		while (src[len])
			len++;
		return (len);
	}
	len = 0;
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		len++;
		dstsize--;
	}
	*dst = '\0';
	while (*src)
	{
		len++;
		src++;
	}
	return (len);
}
