/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:45:16 by mhoosen           #+#    #+#             */
/*   Updated: 2018/08/06 11:14:01 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_fmapf(float n, t_frange r1, t_frange r2)
{
	return (r2.s + (r2.e - r2.s) * ((n - r1.s) / (r1.e - r1.s)));
}

long	ft_lmapl(long n, t_lrange r1, t_lrange r2)
{
	return ((long)ft_fmapf((float)n,
			(t_frange){(float)r1.s, (float)r1.e},
			(t_frange){(float)r2.s, (float)r2.e}));
}

float	ft_lmapf(long n, t_lrange r1, t_frange r2)
{
	return (ft_fmapf((float)n, (t_frange){(float)r1.s, (float)r1.e}, r2));
}

long	ft_fmapl(float n, t_frange r1, t_lrange r2)
{
	return ((long)ft_fmapf(n, r1, (t_frange){(float)r2.s, (float)r2.e}));
}
