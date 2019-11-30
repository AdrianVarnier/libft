/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:44:27 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/15 15:26:45 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	x;

	x = ft_strlen(dst);
	if (x > len)
		return (len + ft_strlen(src));
	ft_strlcpy(dst + x, src, len - x);
	return (x + ft_strlen(src));
}
