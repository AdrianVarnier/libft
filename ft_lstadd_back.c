/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:45:30 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/19 14:29:21 by avarnier         ###   ########.fr       */
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
		while ((*first)->next != 0)
			*first = (*first)->next;
		(*first)->next = new;
		new->next = 0;
	}
}
