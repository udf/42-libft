/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:52:28 by mhoosen           #+#    #+#             */
/*   Updated: 2018/08/02 14:42:20 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*pop_line(t_vec *buf, ssize_t nl_index)
{
	char	*str;
	size_t	line_len;

	line_len = nl_index >= 0 ? (size_t)nl_index : buf->length;
	str = ft_mem_resize(buf->data, line_len, line_len + 1);
	if (!str)
		return (NULL);
	vec_del_n(buf, line_len + 1);
	return (str);
}

static int	free_ret(t_vec *buffer, int ret)
{
	vec_free(buffer);
	return (ret);
}

int			get_next_line(const int fd, char **line)
{
	static t_vec	bufs[MAX_FD];
	ssize_t			nl_index;
	ssize_t			n_read;
	char			temp[BUFF_SIZE];

	if (fd < 0 || fd >= MAX_FD)
		return (GNL_ERROR);
	if (bufs[fd].type_size == 0)
		if (!vec_init(&bufs[fd], 1, BUFF_SIZE))
			return (GNL_ERROR);
	n_read = (ssize_t)bufs[fd].length;
	while ((nl_index = ft_strchr_region(bufs[fd].data, '\n',
					bufs[fd].length - (size_t)n_read, bufs[fd].length)) < 0)
	{
		n_read = read(fd, (void*)temp, BUFF_SIZE);
		if (n_read < 0)
			return (free_ret(&bufs[fd], GNL_ERROR));
		if (n_read == 0)
			break ;
		vec_extend(&bufs[fd], (void*)temp, (size_t)n_read);
	}
	if (bufs[fd].length == 0 && n_read == 0)
		return (free_ret(&bufs[fd], GNL_COMPLETE));
	*line = pop_line(&bufs[fd], nl_index);
	return (*line ? GNL_SUCCESS : free_ret(&bufs[fd], GNL_ERROR));
}
