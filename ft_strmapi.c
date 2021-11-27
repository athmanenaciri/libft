/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:47:30 by anaciri           #+#    #+#             */
/*   Updated: 2021/11/24 18:15:40 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*result;

	if (s == 0)
		return (0);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	result[len] = 0;
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
