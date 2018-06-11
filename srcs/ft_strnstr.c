/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:09:35 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/29 11:21:02 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *haystack_start;
	const char *needle_iter;
	const char *haystack_iter;

	haystack_start = haystack;
	while ((size_t)haystack - (size_t)haystack_start < len)
	{
		needle_iter = needle;
		haystack_iter = haystack;
		while (*needle_iter && *haystack_iter && *haystack_iter == *needle_iter
				&& (size_t)haystack_iter - (size_t)haystack_start < len)
		{
			haystack_iter++;
			needle_iter++;
		}
		if (!*needle_iter)
			return ((char *)(haystack));
		if (!*haystack)
			break ;
		haystack++;
	}
	return (NULL);
}
