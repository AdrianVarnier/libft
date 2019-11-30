/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:48:40 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/30 12:50:28 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy;
	t_list	*first;

	cpy = ft_lstnew(f(l->content));
	first = cpy;
	l = l->next;
	while (l != 0)
	{
		ft_lstadd_back(&cpy, ft_lstnew(f(l->content)));
		if (cpy->next == 0)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		l = l->next;
		cpy = cpy->next;
	}
	return (first);
}
