/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:51:55 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/14 11:54:07 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t x;

	x = 0;
	while (x < len)
	{
		if (((unsigned char *)s1)[x] != ((unsigned char *)s2)[x])
			return (((unsigned char *)s1)[x] - ((unsigned char *)s2)[x]);
		x++;
	}
	return (0);
}
