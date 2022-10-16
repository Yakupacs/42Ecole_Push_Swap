/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:43:07 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/16 20:43:09 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_stack *data)
{
	int	i;
	int	min;
	int	j;
	int	tmp;

	i = 0;
	while (i < data->a_len)
	{
		min = i;
		j = i + 1;
		while (j < data->a_len)
		{
			if (data->tmps[j] < data->tmps[min])
				min = j;
			j++;
		}
		tmp = data->tmps[i];
		data->tmps[i] = data->tmps[min];
		data->tmps[min] = tmp;
		i++;
	}
}
