/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:43:44 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/17 17:43:45 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size: sizeof(int),sizeof(char) ...
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
//     int *a;
//     int  i;
//     a = (int *) ft_calloc(10, sizeof(int));
//     for (i=0; i<10; i++) {
//          *(a+i) = (i+1) * 5;
//          printf("değer: %d\n", *(a+i));
//     }
//     free(a);
// }