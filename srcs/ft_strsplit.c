/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:45:10 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/18 21:10:44 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_splits(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		while (*s && *s != c)
			s++;
		i++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	const char	*start;
	char		**tab;
	char		**tab_iter;

	if (!s)
		return (NULL);
	tab = (char**)ft_memalloc(sizeof(char *) * (count_splits(s, c) + 1));
	if (!tab)
		return (NULL);
	tab_iter = tab;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		start = s;
		while (*s && *s != c)
			s++;
		*tab_iter = ft_strsub(start, 0, (size_t)s - (size_t)start);
		if (!*tab_iter)
			return ((char **)ft_tabfree((void **)tab));
		tab_iter++;
	}
	return (tab);
}
