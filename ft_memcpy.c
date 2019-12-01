/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:42:53 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/01 10:40:41 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	x;

	if (dst == 0 && src == 0)
		return (dst);
	x = 0;
	while (x < len)
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		x++;
	}
	return (dst);
}
