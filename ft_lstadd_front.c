/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:43:11 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/19 15:24:28 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **first, t_list *new)
{
	t_list	*l;

	if (!first || !new)
		return ;
	l = *first;
	new->next = l;
	l = new;
}
