/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 01:46:11 by sulee             #+#    #+#             */
/*   Updated: 2020/10/24 16:45:41 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	if (!n)
		return (0);
	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while ((i < (n - 1) && ss1[i] && ss2[i] && ss1[i] == ss2[i]))
		i++;
	return (ss1[i] - ss2[i]);
}
