/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:50:18 by mhoosen           #+#    #+#             */
/*   Updated: 2018/06/29 13:52:57 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include "libft.h"

/*
** Vec: a stupid attempt at a generic dynamically expandable array
** data: pointer to data
** type_size: size of the type stored
** length: number of stored elements
** size: size of the allocated memory in number of elements
*/
typedef struct	s_vec
{
	void		*data;
	size_t		type_size;
	size_t		length;
	size_t		size;
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
** new_size: the new size after reserving space, must be > length
*/
int				vec_reserve(t_vec *v, size_t n);

/*
** ret: number of elements added (0 if tries and fails to allocate new memory)
** Appends an array to the end of a vector
** v: the vector to append the items to
** items: pointer to an array of items
** num: number of items that items contains
*/
size_t			vec_extend(t_vec *v, void *items, size_t num);

/*
** TODO:
** vec_popone (modify original vec, alloc + return raw data)
** vec_poprange (same as above)
** vec_removeone (same as pop but dont alloc/ret)
** vec_removerange
** vec_finalise (copies only valid data and frees itself, then rets the data)

** TESTS (lol)
*/
#endif
