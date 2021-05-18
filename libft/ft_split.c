/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:51:23 by sulee             #+#    #+#             */
/*   Updated: 2020/12/01 10:46:13 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_num(const char *str, char c)
{
	size_t	i;
	size_t	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] && str[i] != c)
		{
			num++;
			while (str[i] && str[i] != c)
				i++;
		}
		else if (str[i])
			i++;
	}
	return (num);
}

void	split_strcpy(char *dst, char const *src, int start, int last)
{
	int i;

	i = 0;
	while (start < last)
	{
		dst[i] = src[start];
		i++;
		start++;
	}
	dst[i] = '\0';
}

void	do_split(char const *s, char c, char **str)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			if (!(str[j] = (char *)malloc(sizeof(char) * (i - start + 1))))
			{
				free(str);
				return ;
			}
			split_strcpy(str[j], s, start, i);
			j++;
		}
		else if (s[i] != 0)
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	num;

	if (s == 0)
		return (0);
	num = get_num(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (num + 1))))
		return (0);
	str[num] = 0;
	if (num == 0)
		return (str);
	do_split(s, c, str);
	return (str);
}
