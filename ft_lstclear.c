/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:47:02 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/19 15:52:24 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **first, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*l;

	if (!first || !del)
		return ;
	l = *first;
	while (l != 0)
	{
		tmp = l->next;
		ft_lstdelone(l, del);
		l = tmp;
	}
	*first = 0;
}
