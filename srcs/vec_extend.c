/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_extend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 12:28:30 by mhoosen           #+#    #+#             */
/*   Updated: 2018/08/23 15:03:29 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

size_t	vec_extend(t_vec *v, void *items, size_t num)
{
	size_t new_size;

	if (num == 0 || !v)
		return (0);
	new_size = v->length + num;
	if (new_size * v->type_size > v->mem_size)
		if (!vec_reserve(v, new_size))
			return (0);
	ft_memcpy(v->data + v->length * v->type_size, items, v->type_size * num);
	v->length += num;
	return (num);
}
