/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 18:14:21 by avarnier          #+#    #+#             */
/*   Updated: 2020/05/23 19:03:07 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		number_length(const char *s)
{
	int	i;

	i = 0;
	while (ft_isdigit(s[i]) == 1)
		i++;
	return (i);
}

static double	get_number(const char *s)
{
	int		i;
	double	x;
	int		signe;

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
	while (ft_isdigit(s[i]) == 1)
	{
		x = 10 * x + s[i] - '0';
		i++;
	}
	return (x * signe);
}

double			ft_atof(const char *s)
{
	int		i;
	int		n;
	double	x;
	double	y;

	i = 0;
	x = get_number(s);
	y = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (ft_isdigit(s[i]) == 1)
		i++;
	if (s[i] == '.')
	{
		n = number_length(s + i + 1);
		y = get_number(s + i + 1);
		while (n > 0)
		{
			y = y / 10;
			n--;
		}
	}
	return (x + y);
}
