/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dup_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:15:26 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/05 13:18:29 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	*vec_dup_last(t_vec *v)
{
	t_byte *data_start;

	if (!v || !v->length)
		return (NULL);
	data_start = (t_byte *)v->data + (v->length - 1) * v->type_size;
	return (ft_mem_resize((void *)data_start, v->type_size, v->type_size));
}
