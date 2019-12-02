/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:33:15 by avarnier          #+#    #+#             */
/*   Updated: 2019/12/02 17:27:19 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*cpy;

	if (!s1 || !s2)
		return (0);
	if (!(cpy = (char *)malloc(sizeof(char)
	* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	ft_strlcpy(cpy, s1, ft_strlen(s1) + 1);
	ft_strlcat(cpy, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (cpy);
}
