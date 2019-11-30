/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:04:15 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/30 17:44:01 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	x;

	x = ft_strlen(s);
	if (s[x] == c)
		return ((char *)s + x);
	x--;
	while (x > 0)
	{
		if (s[x] == c)
			return ((char *)s + x);
		x--;
	}
	if (s[x] == c)
		return ((char *)s + x);
	return (0);
}
