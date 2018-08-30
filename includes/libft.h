/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:26:16 by mhoosen           #+#    #+#             */
/*   Updated: 2018/08/30 10:53:18 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

# define ABS(x) ((x < 0) ? -(x) : (x))
# define MIN(x, y) ((x < y) ? (x) : (y))
# define MAX(x, y) ((x > y) ? (x) : (y))
# define CLAMP(i, low, high) (MAX(MIN(i, high), low))

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

typedef unsigned char	t_byte;

/*
** Ranges for ft_*map*
*/
typedef struct			s_frange
{
	float				s;
	float				e;
}						t_frange;

typedef struct			s_lrange
{
	long				s;
	long				e;
}						t_lrange;

/*
** mandatory part
*/
void					*ft_memset(void *dest, int c, size_t len);
void					ft_bzero(void *dest, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *dst, const void *src, int c,
									size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
size_t					ft_strlen(const char *s);
char					*ft_strdup(const char *s1);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t dstsize);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strnstr(const char *haystack, const char *needle,
									size_t len);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_atoi(const char *str);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_toupper(int c);
int						ft_tolower(int c);

/*
** part 2
*/
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
									char (*f)(unsigned int, char));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strsub(char const *s, unsigned int start,
									size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);
char					*ft_itoa(int n);
void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putendl(char const *s);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);

/*
** bonus
*/
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** extra
*/
void					**ft_tabfree(void **tab);
ssize_t					ft_strchr_region(const char *s, int c, size_t start,
											size_t end);
void					*ft_mem_resize(const void *src, size_t old_size,
															size_t new_size);
char					*ft_strlower(char *s);
char					*ft_strupper(char *s);
int						ft_isspace(char c);
double					ft_atof(const char *s);
size_t					ft_tokenseek(char **str);

/*
** Maps a value from one range to another
*/
float					ft_fmapf(float n, t_frange r1, t_frange r2);
long					ft_lmapl(long n, t_lrange r1, t_lrange r2);
float					ft_lmapf(long n, t_lrange r1, t_frange r2);
long					ft_fmapl(float n, t_frange r1, t_lrange r2);

#endif
