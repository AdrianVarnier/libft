/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:45:30 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/19 15:48:28 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **first, t_list *new)
{
	t_list	*l;

	if (!first || !new)
		return ;
	if (!(*first))
		*first = new;
	else
	{
		l = *first;
		l = ft_lstlast(l);
		l->next = new;
	}
	new->next = 0;
}
