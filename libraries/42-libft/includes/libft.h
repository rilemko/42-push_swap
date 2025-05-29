/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:03:56 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:41:43 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "_includes.h"
#include "_definitions.h"

int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_chrcat(char *dst, char c, size_t dstsize);
void	ft_bzero(void *s, size_t n);
void	ft_free(void *pointer);
void	ft_free_deep(void **pointer);
int		*ft_intdup(int i);
bool	ft_isalnum(int c);
bool	ft_isalpha(int c);
bool	ft_isascii(int c);
bool	ft_isdigit(int c);
bool	ft_islower(int c);
bool	ft_isprint(int c);
bool	ft_isspace(int c);
bool	ft_isupper(int c);
char	*ft_itoa(int n);
void	ft_lstadd_back(t_lst **lst, t_lst *element);
void	ft_lstadd_front(t_lst **lst, t_lst *element);
void	ft_lstclear(t_lst **lst, void (*del)(void *));
void	ft_lstdelone(t_lst *lst, void (*del)(void *));
t_lst	*ft_lstget(t_lst *lst, size_t pos);
void	*ft_lstgetcontent(t_lst *lst, size_t pos);
void	*ft_lstgetpos(t_lst *lst, size_t pos);
void	ft_lstiter(t_lst *lst, void (*f)(void *));
t_lst	*ft_lstlast(t_lst *lst);
t_lst	*ft_lstmap(t_lst *lst, void *(*f)(void *), void (*del)(void *));
t_lst	*ft_lstnew(void *content);
int		ft_lstsize(t_lst *lst);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_mempos(const void *s, int c, size_t n);
void	*ft_memrev(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int		ft_nbrlen(long long n);
void	ft_putchar_fd(char c, t_fd fd);
void	ft_putendl_fd(char *s, t_fd fd);
void	ft_putnbr_fd(int n, t_fd fd);
void	ft_putstr_fd(char *s, t_fd fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
int		ft_strcnt(const char *s, char sep);
char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strmjoin(char const *s1, char const *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strpos(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strrev(char *s);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*get_next_line(t_fd fd);
