/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:50:18 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/26 13:52:25 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H
# define VEC_H
# include "libft.h"

/*
** Vec: a stupid attempt at a generic dynamically expandable array
** data: pointer to data
** type_size: size of the type stored
** length: number of stored elements
** mem_size: size of the allocated memory in bytes
*/
typedef struct	s_vec
{
	void		*data;
	size_t		type_size;
	size_t		length;
	size_t		mem_size;
}				t_vec;

/*
** Initializes a vector with a specified capacity
** ret: 1 if successful, 0 otherwise
** type_size: the size (in bytes) of the type that is going to be stored
**         (all indicies will use this to calculate the *real* byte size/offset)
** capacity: the initial amount of space for elements
*/
int				vec_init(t_vec *v, size_t type_size, size_t capacity);

/*
** Frees a vector's data, and sets its attributes to 0
*/
void			vec_free(t_vec *v);

/*
** Appends an item to the end of a vector
** ret: number of elements added (0 if tries and fails to allocate new memory)
** v: the vector to append the item to
** item: the item to append (which should be v->type_size long)
*/
size_t			vec_append(t_vec *v, void *item);

/*
** Reserves space for n elements, fails if elements would be truncated
** ret: 1 if successful, else 0
** v: the vector to reserve space on
** new_size: the new size after reserving space, must be > length
*/
int				vec_reserve(t_vec *v, size_t n);

/*
** Appends an array to the end of a vector
** ret: number of elements added (0 if tries and fails to allocate new memory)
** v: the vector to append the items to
** items: pointer to an array of items
** num: number of items that items contains
*/
size_t			vec_extend(t_vec *v, void *items, size_t num);

/*
** TODO: maybe _range versions that take (start, n)
** These are all variations of the same function
** vec_[pop|del|dup]_[one|last|n]
**
** ret:     one: pointer to copy of element, or NULL if oob
**         last: same as above
**            n: pointer to array of elements, or NULL if oob
**      *_del_*: returns 1 if the element(s) were successfully deleted
**
** pop - copies, removes, and returns the specified element(s)
** del - removes the specified element(s)
** dup - copies and returns the specified element(s)
**
** one - applies the operation on one index
** last - applies the operation on the last index
** n - applies the operation on n indices starting from the first
*/
void			*vec_pop_one(t_vec *v, size_t i);
void			*vec_pop_last(t_vec *v);
void			*vec_pop_n(t_vec *v, size_t n);

int				vec_del_one(t_vec *v, size_t i);
int				vec_del_last(t_vec *v);
int				vec_del_n(t_vec *v, size_t n);

void			*vec_dup_one(t_vec *v, size_t i);
void			*vec_dup_last(t_vec *v);
void			*vec_dup_n(t_vec *v, size_t n);

/*
** TODO:
** vec_finalise (copies only valid data and frees itself, then rets the data)
*/
#endif
