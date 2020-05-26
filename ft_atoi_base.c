/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 11:15:51 by avarnier          #+#    #+#             */
/*   Updated: 2020/05/26 12:04:44 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if(c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_base(char c, char *base)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *s, char *base)
{
	int			i;
	int			x;
	int			signe;

	i = 0;
	x = 0;
	signe = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			signe = -1;
		i++;
	}
	while (isbase(s[i], base) > 0)
	{
		x = x * ft_strlen(base);
		x = x + get_base(s[i], base);
		i++;
	}
	return (x * signe);
}

