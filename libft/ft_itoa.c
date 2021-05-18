/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:51:43 by sulee             #+#    #+#             */
/*   Updated: 2020/10/24 17:32:25 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		itoa_len(long long n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	long long	num;
	char		*s;

	num = n;
	len = itoa_len(num);
	if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	s[len] = '\0';
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
	}
	while (num >= 0)
	{
		s[len - 1] = num % 10 + 48;
		if (num > 9)
			num /= 10;
		else
			break ;
		len--;
	}
	return (s);
}
