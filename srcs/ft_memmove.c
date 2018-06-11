/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:53:41 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/28 10:45:15 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	int			dir;
	char		*dstp;
	const char	*srcp;

	dstp = (char *)dst;
	srcp = (const char *)src;
	i = 0;
	dir = 1;
	if (dstp > srcp)
	{
		dir = -1;
		dstp += len - 1;
		srcp += len - 1;
	}
	while (i < len)
	{
		*dstp = *srcp;
		dstp += dir;
		srcp += dir;
		i++;
	}
	return (dst);
}
