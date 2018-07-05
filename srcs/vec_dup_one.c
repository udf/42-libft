/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dup_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:05:24 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/05 13:13:27 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	*vec_dup_one(t_vec *v, size_t i)
{
	t_byte *data_start;

	if (!v || i >= v->length)
		return (NULL);
	data_start = (t_byte *)v->data + i * v->type_size;
	return (ft_mem_resize((void *)data_start, v->type_size, v->type_size));
}
