/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:06:14 by anaciri           #+#    #+#             */
/*   Updated: 2021/11/25 11:40:54 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	*trim_begin(char const *str, char const *set)
{
	while (*str && ft_strchr(set, *str))
		str++;
	return ((char *) str);
}

static int	trim_end(char const *s1, char const *set)
{
	int	len;

	len = ft_strlen(s1);
	while (len-- && ft_strchr(set, s1[len]))
		;
	return (len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		count;
	char	*result;

	if (s1 == 0)
		return (0);
	s1 = trim_begin(s1, set);
	count = trim_end(s1, set);
	result = malloc(count * sizeof(char) + 1);
	if (result == 0)
		return (0);
	ft_strlcpy(result, s1, count + 1);
	return (result);
}
