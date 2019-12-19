/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:31:15 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/19 12:20:04 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (find[0] == '\0')
		return ((char *)s);
	while (s[i] != '\0' && i < len)
	{
		if (s[i] != find[j])
			j = 0;
		else
			j++;
		if (find[j] == '\0')
			return ((char *)s + i - j + 1);
		i++;
	}
	return (0);
}
