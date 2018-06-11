/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:57:33 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/28 11:28:13 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_byte			*dstp;
	const t_byte	*srcp;
	size_t			i;

	i = 0;
	dstp = (t_byte *)dst;
	srcp = (const t_byte *)src;
	while (i < n)
	{
		dstp[i] = srcp[i];
		if (dstp[i] == (t_byte)c)
			return ((void *)(dstp + i + 1));
		i++;
	}
	return (NULL);
}
