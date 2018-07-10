/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:49:41 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/10 19:36:06 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec	*vec_new(size_t type_size, size_t capacity)
{
	t_vec *v;

	if (type_size == 0)
		return (NULL);
	v = (t_vec*)ft_memalloc(sizeof(t_vec));
	v->type_size = type_size;
	if (capacity)
	{
		v->mem_size = capacity * type_size;
		v->data = ft_memalloc(v->mem_size);
	}
	return (v);
}
