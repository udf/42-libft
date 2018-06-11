/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 07:46:44 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/29 10:38:48 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t to_copy;
	size_t src_len;
	size_t dst_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	to_copy = MIN(dstsize - dst_len - 1, src_len);
	ft_memcpy(dst + dst_len, src, to_copy);
	dst[dst_len + to_copy] = '\0';
	return (dst_len + src_len);
}
