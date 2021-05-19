/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 16:55:03 by sulee             #+#    #+#             */
/*   Updated: 2021/05/19 17:50:58 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_atoi(const char *str)/* int */
{
	long long	sign;
	long long	result;/* unsigned long long */

	sign = 1;
	result = 0;
	if (ft_strlen(str) > 12)
		return (3000000000);
	while (*str && (*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - 48;
		str++;
	}
	if (result > 9223372036854775807)
	{
		if (sign == -1)
			return (0);
		return (-1);
	}
	result *= sign;
	return (result);
}