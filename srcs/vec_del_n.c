/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_del_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 12:19:19 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/06 11:20:51 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_del_n(t_vec *v, size_t n)
{
	size_t i;
	size_t start;
	size_t byte_len;
	t_byte *data;

	if (!v || !n)
		return (0);
	if (n >= v->length)
	{
		v->length = 0;
		return (1);
	}
	i = n * v->type_size;
	start = i;
	data = (t_byte *)v->data;
	byte_len = v->length * v->type_size;
	while (i < byte_len)
	{
		data[i - start] = data[i];
		i++;
	}
	v->length -= n;
	return (1);
}
