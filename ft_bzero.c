/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:32:03 by anaciri           #+#    #+#             */
/*   Updated: 2021/11/21 20:18:41 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t			i;
	unsigned char	*o;

	i = 0;
	o = (unsigned char *)s;
	while (i < len)
	{
		o[i] = '\0';
		i++;
	}
}
