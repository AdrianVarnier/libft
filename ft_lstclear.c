/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:47:02 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/02 17:42:00 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **l, void (*del)(void *))
{
	t_list	*tmp;

	if (!l || !del)
		return ;
	while (*l != 0)
	{
		tmp = (*l)->next;
		ft_lstdelone(*l, (*del));
		*l = tmp;
	}
	l = 0;
}
