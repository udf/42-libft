/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:30:23 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/28 11:37:13 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_byte *sp_end;
	t_byte *sp;

	sp = (t_byte *)s;
	sp_end = sp + n;
	while (sp < sp_end)
	{
		if (*sp == (t_byte)c)
			return ((void *)sp);
		sp++;
	}
	return (NULL);
}
