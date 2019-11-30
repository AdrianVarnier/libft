/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:56:13 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/30 17:33:32 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(const char *s, char c)
{
	size_t	x;
	size_t	counter;

	x = 0;
	counter = 0;
	while (s[x] != '\0')
	{
		if (s[x] != c)
		{
			counter++;
			while (s[x] != c || s[x] != '\0')
				x++;
		}
		else
			x++;
	}
	return (counter);
}

static size_t	ft_char(const char *s, char c, size_t start)
{
	size_t	counter;

	counter = 0;
	while (s[start + counter] != c && s[start + counter] != '\0')
		counter++;
	return (counter);
}

static char		**ft_free_past_tab(size_t i, char **tab)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (0);
}

char			**ft_split(const char *s, char c)
{
	size_t	x;
	size_t	i;
	size_t	j;
	char	**tab;

	x = 0;
	i = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1))))
		return (0);
	while (i < ft_words(s, c))
	{
		j = 0;
		while (s[x] == c)
			x++;
		if (!(tab[i] = (char *)malloc(sizeof(char) * (ft_char(s, c, x) + 1))))
			return (ft_free_past_tab(i, tab));
		while (s[x] != c)
		{
			tab[i][j++] = s[x++];
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
