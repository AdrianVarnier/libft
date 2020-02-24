/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:21:34 by avarnier          #+#    #+#             */
/*   Updated: 2020/02/21 16:23:31 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				*ft_intdup(const int *ptr)
{
	int		i;
	int		len;
	int		*cpy;

	i = 0;
	len = ft_intlen(ptr) + 1;
	if (!(cpy = (int *)malloc(sizeof(int) * len)))
		return (0);
	ft_memcpy(cpy, ptr, len);
	return (cpy);
}
