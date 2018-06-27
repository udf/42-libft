/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 12:31:34 by mhoosen           #+#    #+#             */
/*   Updated: 2018/06/12 08:22:31 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_tabfree(void **tab)
{
	void **first;

	first = tab;
	if (tab)
	{
		while (*tab)
		{
			free(*tab);
			tab++;
		}
		free(first);
	}
	return (NULL);
}
