/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:39:48 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/06 03:56:22 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*next;
	t_list	*cur;

	cur = *lst;
	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}
