/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:44:53 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/16 20:44:54 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;

	d = 0;
	s = 0;
	while (dst[d] && (d < size))
		d++;
	while (src[s] && d + s + 1 < size)
	{
		dst[s + d] = src[s];
		s++;
	}
	if (d < size)
		dst[d + s] = '\0';
	return (d + ft_strlen(src));
}
