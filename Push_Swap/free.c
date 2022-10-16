/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:42:35 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/16 20:42:35 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error1(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	error(t_stack *data)
{
	ft_free(data);
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free(t_stack *data)
{
	int	i;

	i = 0;
	if (data->a_s)
		free (data->a_s);
	if (data->b_s)
		free (data->b_s);
	free (data->tmps);
	while (data->numbers[i])
	{
		free(data->numbers[i]);
		i++;
	}
	free(data->numbers);
	free (data);
}
