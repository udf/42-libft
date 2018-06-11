/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 07:52:41 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/22 08:05:21 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *new_str;

	new_str = (char*)malloc(ft_strlen(s1) + 1);
	if (!new_str)
		return (NULL);
	return (ft_strcpy(new_str, s1));
}
