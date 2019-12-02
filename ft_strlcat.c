/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:44:27 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/02 18:23:24 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = ft_strlen(dst);
	if (i >= len)
		return (len + ft_strlen(src));
	ft_strlcpy(dst + i, src, len - i);
	return (i + ft_strlen(src));
}
