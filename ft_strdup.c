/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:11:52 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/26 10:30:23 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = ft_strlen(s) + 1;
	if (!(cpy = (char *)malloc(sizeof(char) * len)))
		return (0);
	ft_memcpy(cpy, s, len);
	return (cpy);
}
