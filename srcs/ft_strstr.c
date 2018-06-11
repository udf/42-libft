/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:58:52 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/29 11:08:04 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *needle_iter;
	const char *haystack_iter;

	while (1)
	{
		needle_iter = needle;
		haystack_iter = haystack;
		while (*needle_iter && *haystack_iter && *haystack_iter == *needle_iter)
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
