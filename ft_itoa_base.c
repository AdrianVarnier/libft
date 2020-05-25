/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 19:45:26 by avarnier          #+#    #+#             */
/*   Updated: 2020/05/25 20:13:38 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_numbers(unsigned int n, char *base)
{
	int	counter;

	if (n == 0)
		return (1);
	counter = 0;
	while (n > 0)
	{
		n = n / ft_strlen(base);
		counter++;
	}
	return (counter);
}

char			*ft_itoa_base(int n, char *base)
{
	int				i;
	unsigned int	nb;
	char			*s;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (!(s = (char *)malloc((sizeof(char) *
	(ft_numbers(nb, base) + 1 + (n < 0 ? 1 : 0))))))
		return (0);
	i = ft_numbers(nb, base) - 1 + (n < 0 ? 1 : 0);
	s[i + 1] = '\0';
	if (n < 0)
		s[0] = '-';
	while (nb >= 0 && i >= 0)
	{
		s[i] = base[nb % 16];
		nb = nb / 16;
		i--;
	}
	return (s);
}
