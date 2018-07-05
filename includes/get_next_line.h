/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:58:17 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/05 13:59:51 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include "vec.h"
# define BUFF_SIZE 32
# define MAX_FD 100

# define GNL_SUCCESS 1
# define GNL_COMPLETE 0
# define GNL_ERROR -1

int				get_next_line(const int fd, char **line);

#endif
