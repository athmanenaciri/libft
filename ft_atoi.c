/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:00:20 by anaciri           #+#    #+#             */
/*   Updated: 2021/11/21 23:26:28 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = -1;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res -= *str - '0';
		str++;
	}
	return (sign * res);
}
