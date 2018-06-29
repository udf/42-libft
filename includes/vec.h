/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:50:18 by mhoosen           #+#    #+#             */
/*   Updated: 2018/06/29 09:10:57 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include "libft.h"

/*
** Vec: a stupid attempt at a generic dynamically expandable array
** data: pointer to data
** type_size: size of the type stored
** data_len: length of stored data (multiples of type_size)
** data_size: actual byte length of data's memory
** num_elements: number of stored elements; equal to data_len / type_size
*/
typedef struct	s_vec
{
	void		*data;
	size_t		type_size;
	size_t		data_len;
	size_t		data_size;
	size_t		num_elements;
}				t_vec;

/*
** Creates a vector with a specified capacity
** ret: pointer to allocated t_vec
** type_size: the size (in bytes) of the type that is going to be stored
**         (all indicies will use this to calculate the *real* byte size/offset)
** capacity: the initial amount of space for elements
*/
t_vec			*vec_new(size_t type_size, size_t capacity);

/*
** Frees a vector and sets its ptr to NULL
*/
void			vec_free(t_vec **v);

/*
** ret: number of elements added (0 if tries and fails to allocate new memory)
** Appends an item to the end of a vector
** v: the vector to append the item to
** item: the item to append (which should be v->type_size long)
*/
size_t			vec_append(t_vec *v, void *item);

/*
** ret: 1 if successful, else 0
** Reserves space for n elements, fails if elements would be truncated
** v: the vector to reserve space on
** n: the number of elements to reserve space for
*/
int				vec_reserve(t_vec *v, size_t n);

/*
** TODO:
** vec_extend (append raw array)
** vec_find
** vec_popone (modify original vec, alloc + return raw data)
** vec_poprange (same as above)
** vec_removeone (same as pop but dont alloc/ret)
** vec_removerange
** vec_finalise (copies only valid data and frees itself, then rets the data)

** TESTS (lol)
*/
#endif
