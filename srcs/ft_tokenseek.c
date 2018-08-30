/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tokenseek.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 10:19:21 by mhoosen           #+#    #+#             */
/*   Updated: 2018/08/30 10:20:06 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_tokenseek(char **str)
{
	char	*iter;
	size_t	tok_len;

	iter = *str;
	while (iter && *iter && *iter == ' ')
		iter++;
	tok_len = 0;
	*str = iter;
	while (iter && iter[tok_len] && iter[tok_len] != ' ')
		tok_len++;
	return (tok_len);
}
