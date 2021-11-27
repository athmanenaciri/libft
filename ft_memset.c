/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:19:53 by anaciri           #+#    #+#             */
/*   Updated: 2021/11/25 11:03:38 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*o;

	o = (unsigned char *)b;
	while (len--)
	{
		*o = (unsigned char ) c;
		o++;
	}
	return (b);
}
