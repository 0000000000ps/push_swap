/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:50:55 by sulee             #+#    #+#             */
/*   Updated: 2020/10/26 18:00:39 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cpy_without_set(char *s, char *s1, int index, int count)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len - count)
	{
		s[i] = s1[index];
		i++;
		index++;
	}
	return (s);
}

int		count_front(char *s, char *set)
{
	int count;
	int i;
	int j;

	count = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (set[j])
		{
			if (s[i] == set[j])
			{
				count++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
		j = 0;
		i++;
	}
	return (count);
}

int		count_back(char *s, char *set)
{
	int count;
	int j;
	int len;

	count = 0;
	j = 0;
	len = ft_strlen(s);
	while (len > 0)
	{
		while (set[j])
		{
			if (s[len - 1] == set[j])
			{
				count++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
		j = 0;
		len--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	char	*set2;
	char	*s;
	int		len;
	int		count;

	if (!s1 || !set)
		return (0);
	s2 = (char *)s1;
	set2 = (char *)set;
	len = ft_strlen(s2);
	count = count_front(s2, set2);
	count += count_back(s2, set2);
	if (count == len * 2)
		count /= 2;
	if (!(s = (char *)malloc(sizeof(char) * (len - count + 1))))
		return (0);
	cpy_without_set(s, s2, count_front(s2, set2), count);
	s[len - count] = '\0';
	return (s);
}
