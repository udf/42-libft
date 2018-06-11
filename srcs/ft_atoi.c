/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 16:45:26 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/21 17:01:43 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int ret;
	int sign;

	while (*str == ' ' || *str == '\t' || *str == '\r'
			|| *str == '\n' || *str == '\v' || *str == '\f')
		str++;
	ret = 0;
	sign = (*str == '-' ? -1 : 1);
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		ret *= 10;
		ret += *str - '0';
		str++;
	}
	return (ret * sign);
}
