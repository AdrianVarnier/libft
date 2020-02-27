/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 10:57:11 by avarnier          #+#    #+#             */
/*   Updated: 2020/02/25 16:30:24 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_numbers(unsigned int n, unsigned int b)
{
	int	counter;

	if (n == 0)
		return (1);
	counter = 0;
	while (n > 0)
	{
		n = n / b;
		counter++;
	}
	return (counter);
}

char			*ft_itoa_base(int n, unsigned int b)
{
	int				i;
	unsigned int	nb;
	char			*s;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (!(s = (char *)malloc((sizeof(char) *
	(ft_numbers(nb, b) + 1 + (n < 0 ? 1 : 0))))))
		return (0);
	i = ft_numbers(nb, b) - 1 + (n < 0 ? 1 : 0);
	s[i + 1] = '\0';
	if (n < 0)
		s[0] = '-';
	while (nb >= b)
	{
		s[i] = nb % b + 48;
		s[i] = ft_isdigit(s[i]) != 0 ? s[i] : s[i] + 7 + 32;
		nb = nb / b;
		i--;
	}
	s[i] = nb + 48;
	s[i] = ft_isdigit(s[i]) != 0 ? s[i] : s[i] + 7 + 32;
	return (s);
}
