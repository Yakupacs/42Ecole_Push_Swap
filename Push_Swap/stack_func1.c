/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_func1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:42:59 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/17 17:42:59 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *data)
{
	int	j;

	j = 0;
	if (data->b_len > 0)
	{
		data->a_len++;
		data->a_s = push_down(data->a_s, data->a_len);
		data->a_s[0] = data->b_s[0];
		data->b_len--;
		data->b_s = push_up(data->b_s, data->b_len);
		write(1, "pa\n", 3);
	}
	else
		return ;
}

void	push_b(t_stack *data)
{
	int	j;

	j = 0;
	if (data->a_len > 0)
	{
		data->b_len++;
		data->b_s = push_down(data->b_s, data->b_len);
		data->b_s[0] = data->a_s[0];
		data->a_len--;
		data->a_s = push_up(data->a_s, data->a_len);
		write(1, "pb\n", 3);
	}
	else
		return ;
}

int	*push_down(int *arr, int len)
{
	int	i;

	i = len - 1;
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	return (arr);
}

int	*push_up(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	return (arr);
}
