/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:23:14 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/01 17:45:45 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (words);
}

static int	ft_getword(const char *s, char c, int n)
{
	int i;
	int	word;

	i = 0;
	word = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			word++;
			if (word == n)
				return (i);
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (0);
}

static int	ft_wordlen(const char *s, char c, int n)
{
	int i;
	int	len;

	i = ft_getword(s, c, n);
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char		**ft_split(const char *s, char c)
{
	int		i;
	int		words;
	char	**tab;

	if (!s)
		return (0);
	i = 0;
	words = ft_count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (words + 1))))
		return (0);
	while (i < words)
	{
		if (!(tab[i] = ft_substr(s, ft_getword(s, c, i), ft_wordlen(s, c, i))))
		{
			while (i > 0)
				free(tab[i--]);
			free(tab);
			return (0);
		}
		i++;
	}
	tab[i] = 0;
	return (tab);
}
