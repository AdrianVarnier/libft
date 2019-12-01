/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:11:52 by avarnier          #+#    #+#             */
/*   Updated: 2019/11/14 13:40:38 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		x;
	char	*cpy;

	x = 0;
	if (!(cpy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	while (s[x] != '\0')
	{
		cpy[x] = s[x];
		x++;
	}
	cpy[x] = '\0';
	return (cpy);
}
