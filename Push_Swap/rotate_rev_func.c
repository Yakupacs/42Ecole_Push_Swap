/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rev_func.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:43:00 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/16 20:43:00 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_stack *data)
{
	int	tmp;
	int	i;
	int	d;

	i = data->a_len - 1;
	d = data->a_s[i];
	while (i > 0)
	{
		tmp = data->a_s[i - 1];
		data->a_s[i] = data->a_s[i - 1];
		data->a_s[i] = tmp;
		i--;
	}
	data->a_s[0] = d;
	write(1, "rra\n", 4);
}

void	rev_rotate_b(t_stack *data)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < data->a_len - 1)
	{
	tmp = data->b_s[i + 1];
	data->b_s[i + 1] = data->b_s[i];
	data->b_s[i] = tmp;
	i++;
	}
	write(1, "rrb\n", 4);
}

void	rev_rotate_r(t_stack *data)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < data->a_len - 1)
	{
	tmp = data->a_s[i + 1];
	data->a_s[i + 1] = data->a_s[i];
	data->a_s[i] = tmp;
	i++;
	}
	i = 0;
	while (i < data->a_len - 1)
	{
	tmp = data->b_s[i + 1];
	data->b_s[i + 1] = data->b_s[i];
	data->b_s[i] = tmp;
	i++;
	}
	write(1, "rrr\n", 4);
}
