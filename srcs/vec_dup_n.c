/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dup_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:18:39 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/05 13:22:38 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void			*vec_dup_n(t_vec *v, size_t n)
{
	size_t byte_n;

	if (!v || n > v->length)
		return (NULL);
	byte_n = n * v->type_size;
	return (ft_mem_resize(v->data, byte_n, byte_n));
}
