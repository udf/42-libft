/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 10:20:25 by mhoosen           #+#    #+#             */
/*   Updated: 2018/09/10 09:53:18 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	parse_digits(const char **s, int *count)
{
	double	value;
	int		i;

	i = 0;
	value = 0;
	while (ft_isdigit(**s))
	{
		value = value * 10.0 + (*(*s)++ - '0');
		i++;
	}
	if (count)
		*count = i;
	return (value);
}

const char		*ft_atof_seek(const char *s, float *out)
{
	double	sign;
	double	value;
	double	fraction;
	int		frac_digits;

	while (ft_isspace(*s))
		s++;
	sign = 1.0f;
	if (*s == '-' || *s == '+')
	{
		sign = (*s == '+' ? 1 : -1);
		s++;
	}
	value = parse_digits(&s, NULL);
	if (*s == '.')
	{
		s++;
		frac_digits = 0;
		fraction = parse_digits(&s, &frac_digits);
		while (frac_digits--)
			fraction /= 10.0;
		value += fraction;
	}
	*out = (float)(value * sign);
	return (s);
}

float			ft_atof(const char *s)
{
	float	value;

	ft_atof_seek(s, &value);
	return (value);
}
