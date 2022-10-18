/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:45:43 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/17 17:45:44 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
fd(file descriptor) values;
0:	Standard input	
1:	Standard output
2:	Standard error

int fd = open(file_path, mod); 
(mod: O_RDONLY | O_CREAT...)

Range of possible values of "fd" is from 0 to 1023 for Linux system.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
