# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 07:39:20 by mhoosen           #+#    #+#              #
#    Updated: 2018/08/05 16:47:55 by mhoosen          ###   ########.fr        #
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
ft_tabfree ft_mem_resize ft_strchr_region ft_strupper ft_strlower ft_rmap \
\
vec_init vec_free vec_append vec_reserve vec_extend vec_fill vec_get \
vec_del_one vec_del_last vec_del_n \
vec_dup_one vec_dup_last vec_dup_n \
vec_pop_one vec_pop_last vec_pop_n \
\
get_next_line

NAME=libft.a
INCLUDES=libft vec get_next_line
HEADERS=$(INCLUDES:%=includes/%.h)
OBJS=$(FUNCS:=.o)

TEST_SRCS=$(wildcard tests/t_*.c)
TEST_BINS=$(TEST_SRCS:tests/%.c=tests/bin/%)

CFLAGS=-Wall -Wextra -Werror -Wconversion

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

$(OBJS): %.o:srcs/%.c $(HEADERS)
	gcc $(CFLAGS) -I includes -c $(@:%.o=srcs/%.c)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

tests: $(TEST_BINS)

$(TEST_BINS): $(NAME) $(TEST_SRCS)
	mkdir -p ./tests/bin
	gcc -I includes -o $@ $(@:tests/bin/%=tests/%.c) -L . -lft

re: fclean all
