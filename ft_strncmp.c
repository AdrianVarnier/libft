/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:29:15 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/01 13:38:27 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t x;

	x = 0;
	if (!len)
		return (0);
	while (s1[x] == s2[x] && s1[x] && s2[x] && x < len - 1)
		x++;
	return ((unsigned char)s1[x] - s2[x]);
}
