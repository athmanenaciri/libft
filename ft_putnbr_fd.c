/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:40:04 by anaciri           #+#    #+#             */
/*   Updated: 2021/11/22 17:06:12 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	_ft_putnbr(int fd, int nb)
{
	int	c;

	if (nb < 10)
	{
		c = nb + '0';
		write(fd, &c, 1);
	}
	else
	{
		_ft_putnbr(fd, nb / 10);
		_ft_putnbr(fd, nb % 10);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	min;

	if (n < 0)
	{
		write(fd, "-", 1);
		min = 1 << (sizeof(int) * 8 - 1);
		if (min == n)
		{
			_ft_putnbr(fd, n / 10 * -1);
			_ft_putnbr(fd, n % 10 * -1);
			return ;
		}
		n = n * -1;
	}
	_ft_putnbr(fd, n);
}
