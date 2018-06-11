/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:59:34 by mhoosen           #+#    #+#             */
/*   Updated: 2018/06/11 11:30:19 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *link;

	link = (t_list*)ft_memalloc(sizeof(t_list));
	if (!link)
		return (NULL);
	if (content)
	{
		link->content = (void*)ft_strsub((char*)content, 0, content_size);
		link->content_size = content_size;
	}
	return (link);
}
