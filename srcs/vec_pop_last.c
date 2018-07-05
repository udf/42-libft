/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pop_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:32:34 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/05 13:35:38 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	*vec_pop_last(t_vec *v)
{
	void *data;

	data = vec_dup_last(v);
	if (!data)
		return (NULL);
	vec_del_last(v);
	return (data);
}
