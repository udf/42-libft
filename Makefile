# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 07:39:20 by mhoosen           #+#    #+#              #
#    Updated: 2018/06/29 11:04:34 by mhoosen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCS=ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp \
ft_strlen ft_strdup ft_strcpy ft_strncpy ft_strcat ft_strncat ft_strlcat \
ft_strchr ft_strrchr ft_strstr ft_strnstr ft_strcmp ft_strncmp ft_atoi \
ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower \
\
ft_memalloc ft_memdel ft_strnew ft_strdel ft_strclr ft_striter ft_striteri \
ft_strmap ft_strmapi ft_strequ ft_strnequ ft_strsub ft_strjoin ft_strtrim \
ft_strsplit ft_itoa ft_putchar ft_putstr ft_putendl ft_putnbr ft_putchar_fd \
ft_putstr_fd ft_putendl_fd ft_putnbr_fd\
\
ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap \
\
ft_tabfree ft_mem_resize ft_strchr_region \
vec_new vec_free vec_append vec_reserve

SRCS=$(FUNCS:%=srcs/%.c)
OBJS=$(FUNCS:=.o)
TEST_SRCS=$(wildcard tests/t_*.c)
TEST_BINS=$(TEST_SRCS:%.c=%)
NAME=libft.a
CFLAGS=-Wall -Wextra -Werror -Wconversion

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	gcc $(CFLAGS) -I includes -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

bla:
	echo $(TEST_SRCS)

tests: $(TEST_SRCS) all
	$(foreach test_src, $(TEST_SRCS), gcc -L . -lft -I includes -o $(test_src:tests/%.c=tests/bin/%) $(test_src))

re: fclean all
