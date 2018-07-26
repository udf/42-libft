/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:49:41 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/26 14:04:23 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_init(t_vec *v, size_t type_size, size_t capacity)
{
	if (type_size == 0)
		return (0);
	v->type_size = type_size;
	v->data = NULL;
	v->length = 0;
	v->mem_size = 0;
	if (capacity)
	{
		v->data = ft_memalloc(capacity * type_size);
		if (!v->data)
			return (0);
		v->mem_size = capacity * type_size;
	}
	return (1);
}
