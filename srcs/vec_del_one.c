/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_del_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 11:25:03 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/03 14:41:24 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int		vec_del_one(t_vec *v, size_t i)
{
	t_byte *data;
	size_t m;

	if (!v || i >= v->length)
		return (0);
	data = (t_byte *)v->data;
	m = v->type_size;
	ft_memcpy(data + i * m, data + (i + 1) * m, (v->length - i - 1) * m);
	v->length -= 1;
	return (1);
}
