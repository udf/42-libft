/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:49:07 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/03 14:00:46 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // aaa

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	printf("Copying %zu bytes from %p to %p\n", n, src, dst);

	i = 0;
	while (i < n)
	{
		((t_byte *)dst)[i] = ((const t_byte *)src)[i];
		i++;
	}
	return (dst);
}
