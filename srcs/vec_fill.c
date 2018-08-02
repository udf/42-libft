/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 19:29:06 by mhoosen           #+#    #+#             */
/*   Updated: 2018/08/02 19:31:40 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	vec_fill(t_vec *v, void *item)
{
	size_t i;

	if (!v || !item)
		return ;
	i = 0;
	while (i < v->length)
	{
		ft_memcpy(v->data + v->type_size * i, item, v->type_size);
		i++;
	}
}
