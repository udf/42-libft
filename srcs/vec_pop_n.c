/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pop_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:32:41 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/05 13:35:39 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	*vec_pop_n(t_vec *v, size_t n)
{
	void *data;

	data = vec_dup_n(v, n);
	if (!data)
		return (NULL);
	vec_del_n(v, n);
	return (data);
}
