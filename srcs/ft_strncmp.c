/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:28:53 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/29 11:40:07 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1p;
	const unsigned char	*s2p;

	i = 0;
	s1p = (const unsigned char*)s1;
	s2p = (const unsigned char*)s2;
	while (i < n && s1p[i] && s2p[i] && s1p[i] == s2p[i])
		i++;
	if (i >= n)
		i = n - 1;
	return (s1p[i] - s2p[i]);
}
