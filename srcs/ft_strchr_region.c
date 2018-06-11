/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_region.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:58:46 by mhoosen           #+#    #+#             */
/*   Updated: 2018/06/06 10:34:41 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_strchr_region(const char *s, int c, size_t start, size_t end)
{
	size_t i;

	i = start;
	while (i < end)
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	return (-1);
}
