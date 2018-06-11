/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:09:55 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/31 09:15:38 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strtrim_is_ws(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	const char	*start;
	const char	*end;

	if (!s)
		return (NULL);
	start = s;
	while (*start && strtrim_is_ws(*start))
		start++;
	end = start;
	while (*end)
		end++;
	end--;
	while (end > start && strtrim_is_ws(*end))
		end--;
	end++;
	return (ft_strsub(start, 0, (size_t)end - (size_t)start));
}
