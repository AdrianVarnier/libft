/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 18:38:49 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/30 12:51:34 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t octet)
{
	void	*s;

	if (len == 0 || octet == 0)
	{
		len = 1;
		octet = 1;
	}
	if (!(s = (void *)malloc(len * octet)))
		return (0);
	ft_memset(s, 0, len * octet);
	return (s);
}
