/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:54:01 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/29 10:55:28 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_ptr;

	last_ptr = NULL;
	while (1)
	{
		if (*s == (char)c)
			last_ptr = (char *)s;
		if (!*s)
			break ;
		s++;
	}
	return (last_ptr);
}
