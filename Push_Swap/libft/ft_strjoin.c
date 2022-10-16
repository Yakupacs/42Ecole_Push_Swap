/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:44:49 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/16 20:44:51 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*r_str;
	size_t	i;
	size_t	j;

	r_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	i = -1;
	j = -1;
	while (s1[++i])
		r_str[i] = s1[i];
	r_str[i] = ' ';
	i++;
	while (s2[++j])
		r_str[i++] = s2[j];
	r_str[i] = '\0';
	return (r_str);
}
