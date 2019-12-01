/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:45:28 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/01 17:39:44 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(const char *s1, const char *set)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static size_t	ft_end(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	if (!s1)
		return (0);
	if (ft_start(s1, set) == ft_strlen(s1))
		return (ft_strdup(""));
	return (ft_substr(s1, ft_start(s1, set),
	ft_end(s1, set) - ft_start(s1, set) + 1));
}
