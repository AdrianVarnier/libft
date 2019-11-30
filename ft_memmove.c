/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:54:55 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/22 16:35:45 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t x;

	if (dst == 0 && src == 0)
		return (dst);
	x = 0;
	if (dst > src)
	{
		while (x < len)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		while (x < len)
		{
			((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
			x++;
		}
	}
	return (dst);
}
