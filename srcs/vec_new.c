/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:49:41 by mhoosen           #+#    #+#             */
/*   Updated: 2018/06/29 11:27:34 by mhoosen          ###   ########.fr       */
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
		v->size = capacity;
		v->data = ft_memalloc(capacity * type_size);
	}
	return (v);
}
