/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:48:29 by anaciri           #+#    #+#             */
/*   Updated: 2021/11/19 18:23:42 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	int				size;
	unsigned int	s_len;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		size = 0;
	else
		size = min(s_len - start, len);
	res = malloc((size + 1) * sizeof(char));
	if (res == 0)
		return (0);
	ft_strlcpy(res, s + start, size + 1);
	return (res);
}
