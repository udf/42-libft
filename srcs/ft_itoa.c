/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 13:02:40 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/06 11:30:54 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	tmp[12];
	char	*iter;
	int		is_neg;

	is_neg = n < 0;
	iter = tmp + 11;
	*iter = '\0';
	while (1)
	{
		iter--;
		*iter = (char)('0' + ABS(n % 10));
		n /= 10;
		if (n == 0)
			break ;
	}
	if (is_neg)
	{
		iter--;
		*iter = '-';
	}
	return (ft_strdup(iter));
}
