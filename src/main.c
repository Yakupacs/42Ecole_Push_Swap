/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:50:08 by yacis@stude       #+#    #+#             */
/*   Updated: 2022/10/15 19:05:13 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_data	*data;
	
	if (ac > 1)
	{
		data = malloc(sizeof(t_data));
		ft_printf("%s", av[1]);		
	}
	else
		return (0);
}

// sa : swap a - İlk 2 elementi a yığınının en üstüne çıkarır \
// Bir veya daha az eleman varsa hiçbir şey yapmaz.
//
// sb : swap b - İlk 2 elementi b yığınının en üstüne çıkarır. \
// Bir veya daha az eleman varsa hiçbir şey yapmaz.
//
// ss : sa ve sb aynı anda kullanılır.
//
// pa : push a - b yığınının en üstteki ilk elemanını a yığının \
// en üstüne yerleştirir. b boşsa hiçbir şey yapmaz.
//
// pb : push b - a yığınının en üstteki ilk elemanını b yığının \
// en üstüne yerleştirir. a boşsa hiçbir şey yapmaz.
//
// ra : rotate a - a yığınının tüm elemanlarını 1 üste taşır. \
// İlk eleman son eleman haline gelir.
//
// rb : rotate b - b yığınının tüm elemanlarını 1 üste taşır. \
// İlk eleman son eleman haline gelir.
//
// rr : ra ve rb aynı anda kullanılır.
//
// rra : reverse rotate a - a yığınının tüm elemenlarını 1 alt taşır \
// Son eleman ilk eleman haline gelir.
//
// rrb : reverse rotate b - b yığınının tüm elemanlarını 1 alta taşır \
// Son eleman ilk eleman haline gelir.
//
// rrr : rra ve rrb aynı anda kullanılır. 