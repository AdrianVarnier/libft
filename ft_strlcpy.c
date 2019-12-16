/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:19:09 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/16 17:20:23 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < len)
		ft_memcpy(dst, src, srclen + 1);
	else if (len != 0)
	{
		ft_memcpy(dst, src, len - 1);
		dst[len - 1] = '\0';
	}
	return (srclen);
}
