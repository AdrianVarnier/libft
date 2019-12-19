/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:31:15 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/19 16:57:01 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	findlen;

	i = 0;
	findlen = ft_strlen(find);
	if (find[0] == '\0')
		return ((char *)s);
	while (s[i] != '\0' && len >= findlen)
	{
		if (s[i] == find[0])
			if (ft_strncmp(s + i, find, findlen) == 0)
				return ((char *)s + i);
		i++;
		len--;
	}
	return (0);
}
