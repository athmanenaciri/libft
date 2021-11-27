/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:21:14 by anaciri           #+#    #+#             */
/*   Updated: 2021/11/21 21:08:30 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;

	pointer = (char *)malloc(count * size);
	if (pointer == 0)
		return (0);
	ft_bzero(pointer, count * size);
	return (pointer);
}
