/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:30:32 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/14 11:53:25 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t x;

	x = 0;
	while (x < len)
	{
		if (((unsigned char *)s)[x] == (unsigned char)c)
			return ((unsigned char *)s + x);
		x++;
	}
	return (0);
}
