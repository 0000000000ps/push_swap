/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:52:03 by sulee             #+#    #+#             */
/*   Updated: 2020/10/23 16:55:45 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(tmp = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}
