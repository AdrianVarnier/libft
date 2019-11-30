/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:23:30 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/25 17:50:37 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numbers(unsigned int n)
{
	size_t	counter;

	if (n == 0)
		return (1);
	counter = 0;
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char			*ft_itoa(int n)
{
	size_t			x;
	unsigned int	nb;
	char			*s;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (!(s = (char *)malloc((sizeof(char) *
	(ft_numbers(nb) + 1 + (n < 0 ? 1 : 0))))))
		return (0);
	x = ft_numbers(nb) - 1 + (n < 0 ? 1 : 0);
	s[x + 1] = '\0';
	if (n < 0)
		s[0] = '-';
	while (nb >= 10)
	{
		s[x] = nb % 10 + 48;
		nb = nb / 10;
		x--;
	}
	s[x] = nb + 48;
	return (s);
}
