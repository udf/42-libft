/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:30:25 by anonymous         #+#    #+#             */
/*   Updated: 2018/07/09 20:32:40 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlower(char *s)
{
	char *s_iter;

	s_iter = s;
	while (s_iter && *s_iter)
	{
		*s_iter = (char)ft_tolower((int)*s_iter);
		s_iter++;
	}
	return (s);
}
