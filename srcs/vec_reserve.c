/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_reserve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 09:10:11 by mhoosen           #+#    #+#             */
/*   Updated: 2018/06/29 11:41:00 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_reserve(t_vec *v, size_t n)
{
	void	*tmp_data;
	size_t	new_size;

	if (n <= v->length)
		return (0);
	new_size = n * v->type_size;
	tmp_data = ft_mem_resize(v->data, v->length * v->type_size, new_size);
	if (!tmp_data)
		return (0);
	free(v->data);
	v->size = n;
	v->data = tmp_data;
	return (1);
}
