/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:45:30 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/02 17:14:39 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **last, t_list *new)
{
	if (!last || !new)
		return ;
	if (!(*last))
		*last = new;
	else
	{
		(*last)->next = new;
		new->next = 0;
	}
}
