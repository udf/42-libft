/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:31:06 by mhoosen           #+#    #+#             */
/*   Updated: 2018/06/08 12:02:15 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *new_iter;

	if (!lst || !f)
		return (NULL);
	head = f(lst);
	new_iter = head;
	lst = lst->next;
	while (lst)
	{
		new_iter->next = f(lst);
		new_iter = new_iter->next;
		lst = lst->next;
	}
	return (head);
}
