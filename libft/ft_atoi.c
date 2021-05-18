/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulee <sulee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 16:55:03 by sulee             #+#    #+#             */
/*   Updated: 2020/10/21 01:45:57 by sulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	result;

	sign = 1;
	result = 0;
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
	return (sign * result);
}
