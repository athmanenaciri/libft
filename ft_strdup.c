/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:31:56 by anaciri           #+#    #+#             */
/*   Updated: 2021/11/21 20:30:06 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;	
	int		i;
	char	*dp;

	i = 0;
	len = ft_strlen(s1);
	dp = (char *)malloc((len + 1) * sizeof(char));
	if (dp == 0)
		return (0);
	ft_strlcpy(dp, s1, len + 1);
	return (dp);
}
