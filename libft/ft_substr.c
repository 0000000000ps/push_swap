/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:19:59 by sulee             #+#    #+#             */
/*   Updated: 2020/10/24 16:17:14 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	i = 0;
	j = 0;
	if (s == 0)
		return (0);
	if (!(tmp = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i])
	{
		if (start <= i && j < len)
		{
			tmp[j] = s[i];
			j++;
		}
		i++;
	}
	tmp[j] = 0;
	return (tmp);
}
