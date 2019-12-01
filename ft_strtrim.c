/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:45:28 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/25 17:54:56 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(const char *s1, const char *set)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (set[y] != '\0')
	{
		if (s1[x] == set[y])
		{
			x++;
			y = 0;
		}
		else
			y++;
	}
	return (x);
}

static int	ft_end(const char *s1, const char *set)
{
	int x;
	int y;

	x = ft_strlen(s1) - 1;
	y = 0;
	while (set[y] != '\0')
	{
		if (s1[x] == set[y])
		{
			x--;
			y = 0;
		}
		else
			y++;
	}
	return (x);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	if (ft_start(s1, set) == ft_strlen(s1))
		return (ft_strdup(""));
	return (ft_substr(s1, ft_start(s1, set),
	ft_end(s1, set) - ft_start(s1, set) + 1));
}
