/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:31:15 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/14 12:19:15 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[x] != '\0' && x < len)
	{
		if (big[x] != little[y])
			y = 0;
		else
			y++;
		if (little[y] == '\0')
			return ((char *)big + x - y + 1);
		x++;
	}
	return (0);
}
