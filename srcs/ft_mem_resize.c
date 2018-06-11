/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 08:20:19 by mhoosen           #+#    #+#             */
/*   Updated: 2018/06/06 12:26:39 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_mem_resize(const void *src, size_t old_size, size_t new_size)
{
	void *dest;

	dest = ft_memalloc(new_size);
	if (!dest)
		return (NULL);
	return (ft_memcpy(dest, src, MIN(old_size, new_size)));
}
