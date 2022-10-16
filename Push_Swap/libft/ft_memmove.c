/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:44:14 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/16 20:44:15 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void	*src, size_t len)
{
	char	*d;
	char	*s;

	if (dst == src || len == 0)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (dst);
}
