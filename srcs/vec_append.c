/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:13:01 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/03 11:05:04 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

size_t	vec_append(t_vec *v, void *item)
{
	if (!v)
		return (0);
	if (v->length >= v->size)
		if (!vec_reserve(v, MAX(2, v->size * 2)))
			return (0);
	ft_memcpy(v->data + v->length * v->type_size, item, v->type_size);
	v->length += 1;
	return (1);
}
