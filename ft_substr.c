/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:06:44 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/01 13:20:30 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		x;
	char	*cpy;

	x = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (!(cpy = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_strlcpy(cpy, s + start, len + 1);
	return (cpy);
}
