/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 00:59:40 by mhoosen           #+#    #+#             */
/*   Updated: 2018/08/14 21:20:18 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	*vec_get(t_vec *v, size_t i)
{
	if (i >= v->length)
		return (NULL);
	return (v->data + v->type_size * i);
}

void	*vec_get_back(t_vec *v)
{
	if (v->length <= 0)
		return (NULL);
	return (v->data + v->type_size * (v->length - 1));
}

void	*vec_get_2d(t_vec *v, size_t x, size_t y, size_t w)
{
	const size_t i = x + y * w;

	if (x >= w || i >= v->length)
		return (NULL);
	return (v->data + v->type_size * i);
}
