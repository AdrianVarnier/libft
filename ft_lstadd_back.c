/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:45:30 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/19 14:45:42 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **first, t_list *new)
{
	if (!first || !new)
		return ;
	if (!(*first))
		*first = new;
	else
	{
		*first = ft_lstlast(*first);
		(*first)->next = new;
		new->next = 0;
	}
}
