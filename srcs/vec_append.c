/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:13:01 by mhoosen           #+#    #+#             */
/*   Updated: 2018/06/29 09:13:57 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

#include <stdio.h>
size_t	vec_append(t_vec *v, void *item)
{
	if (v->data_len + v->type_size >= v->data_size)
		if (!vec_reserve(v, MAX(2, v->num_elements * 2)))
			return (0);
	ft_memcpy(v->data + v->data_len, item, v->type_size);
	v->data_len += v->type_size;
	v->num_elements += 1;
	return (1);
}
