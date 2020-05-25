/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:11:40 by avarnier          #+#    #+#             */
/*   Updated: 2020/05/25 19:51:48 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void			*ft_memset(void *s, int c, size_t len);
void			ft_bzero(void *s, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t len);
void			*ft_memccpy(void *dst, const void *src, int c, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t len);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *s);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t len);
size_t			ft_strlcat(char *dst, const char *src, size_t len);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_atoi(const char *s);
void			*ft_calloc(size_t len, size_t octet);
char			*ft_strdup(const char *s);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s1, const char *set);
char			**ft_split(const char *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_lstadd_back(t_list **first, t_list *new);
void			ft_lstadd_front(t_list **first, t_list *new);
void			ft_lstclear(t_list **first, void (*del)(void *));
void			ft_lstdelone(t_list *l, void (*del)(void *));
void			ft_lstiter(t_list *l, void (*f)(void *));
t_list			*ft_lstlast(t_list *l);
t_list			*ft_lstmap(t_list *l, void *(*f)(void *), void(*del)(void *));
t_list			*ft_lstnew(void *new_content);
int				ft_lstsize(t_list *l);
void			ft_strdel(char **s);
double			ft_atof(const char *s);
char			*ft_itoa_base(int x, char *s);

#endif
