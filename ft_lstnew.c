/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:41:33 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/22 14:42:49 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *new_content)
{
	t_list	*l;

	if (!(l = (t_list *)malloc(sizeof(t_list))))
		return (0);
	l->content = new_content;
	l->next = 0;
	return (l);
}
