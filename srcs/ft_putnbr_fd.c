/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:38:46 by mhoosen           #+#    #+#             */
/*   Updated: 2018/05/31 09:38:47 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_internal(int n, int fd)
{
	if (n == 0)
		return ;
	ft_putnbr_internal(n / 10, fd);
	ft_putchar_fd('0' + ABS(n % 10), fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
		ft_putchar_fd('-', fd);
	ft_putnbr_internal(n, fd);
}
