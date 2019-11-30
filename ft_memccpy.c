/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:13:28 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/22 16:25:36 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t	x;

	x = 0;
	while (x < len)
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		if (((unsigned char *)dst)[x] == (unsigned char)c)
			return (dst + x + 1);
		x++;
	}
	return (0);
}
