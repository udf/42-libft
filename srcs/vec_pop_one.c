/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pop_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:32:28 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/05 13:35:38 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	*vec_pop_one(t_vec *v, size_t i)
{
	void *data;

	data = vec_dup_one(v, i);
	if (!data)
		return (NULL);
	vec_del_one(v, i);
	return (data);
}
