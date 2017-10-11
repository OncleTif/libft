/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:32:15 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/11 12:00:24 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>
# include <errno.h>
# include <limits.h>
# define BUFF_SIZE 4
# define DEBUG 1

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_lst
{
	void			*cnt;
	struct s_lst	*nxt;
}					t_lst;

typedef struct		s_dlst
{
	void			*cnt;
	struct s_dlst	*nxt;
	struct s_dlst	*prv;
}					t_dlst;

typedef struct		s_file_mem
{
	int					fd;
	int					eof;
	t_list				*lst;
	struct s_file_mem	*next;
}					t_file_mem;

char				ft_ctop(char c);
void				ft_error(char *str);
void				ft_putchar_fd(char c, int fd);
int					get_next_line(int const fd, char **line);
int					get_next_multiline(int fd, char **str_add);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putchar(char c);
void				ft_putnchar(char *str, size_t size);
void				ft_putstr(char const *s);
void				ft_putnstr(void const *s, size_t size);
void				*ft_memalloc(size_t size);
char				*ft_strnew(size_t size);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				ft_memsort(void **tab, int size, int (*f)(void *, void *));
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *s1, const char *s2, size_t n);
char				*ft_strdup(const char *s1);
char				*ft_strdup_sep(const char *s1, char sep);
char				*ft_strndup(const char *s1, int size);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_arraystrdel(char ***pas);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_atoi(const char *str);
int					ft_atoi_strict(const char *str);
unsigned int		ft_atoui_base(char *str);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isdigit(int c);
size_t				ft_strlen(const char *s);
size_t				ft_strlen_sep(const char *s, const char c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strcmpadapter(void *s1, void *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strequ_sep(char const *s1, char const *s2, char const c);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
void				ft_strsort(char **tab, int size);
int					ft_pow(int n, int pwr);
void				**ft_ptrarray(void *arr, size_t nbr, size_t size);
void				ft_printchar(char n);
void				ft_printchar_fd(char n, int fd);
void				ft_putaddr(void *n);
void				ft_putnaddr(void *n, int size);
void				ft_putaddr_fd(void *n, int fd);
void				ft_putnaddr_fd(void *n, int fd, int size);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr_base_fd(int n, int base, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_base(int n, int base);
void				ft_putnbrendl_fd(int n, int fd);
void				ft_putnbrendl(int n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_range(unsigned int nbr);
unsigned long		ft_rangelength(int size, unsigned int base);
int					ft_range_base(unsigned int nbr, unsigned int base);
unsigned long		ft_rangelong_base(unsigned long nbr, unsigned int base);
unsigned long long	ft_longlongrange_base(unsigned long long nbr,
		unsigned int base);
long				ft_longrange_base(unsigned long nbr, unsigned int base);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_clean(char *s1, char *s2);
char				*ft_strtrim(char const *s);
char				*ft_strtrim_cr(char *s);
char				*ft_strltrim(char *s);
size_t				ft_next_word(char const *s2, char c);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_itoa_base(int n, unsigned int base);
char				*ft_ltoa_base(long n, unsigned int base);
char				*ft_lltoa_base(long long n, unsigned int base);
char				*ft_uitoa_base(unsigned int n, unsigned int base, char c);
char				*ft_ultoa_base(unsigned long n, unsigned int base, char c);
char				*ft_ulltoa_base(unsigned long long n,
		unsigned int base, char c);
void				ft_ultoaa_base(unsigned long n, char *ptr,
	unsigned int base, char c);
void				ft_ulltoaa_base(unsigned long long n, char *ptr,
	unsigned int base, char c);
void				ft_putendl(char const *s);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstpush_back(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_lst				*ft_lsnew(void *content);
void				ft_lsdel(t_lst **alst, void (*del)(void *));
void				ft_lsdelone(t_lst **alst, void (*del)(void *));
void				ft_lsiter(t_lst *lst, void (*f)(t_lst *elem));
void				ft_lspush(t_lst **alst, t_lst *new);
void				ft_lspush_back(t_lst **alst, t_lst *new);
t_dlst				*ft_dlsnew(void *content);
void				ft_dlspush(t_dlst **alst, t_dlst *new);
void				ft_dlspush_back(t_dlst **alst, t_dlst *new);
int					ft_intsize(unsigned int nbr);
int					ft_intsize_base(unsigned int nbr, unsigned int base);
int					ft_longsize_base(unsigned long nbr, unsigned int base);
size_t				ft_longlongsize_base(unsigned long long nbr,
		unsigned int base);
void				ft_putstr_lst(t_list *elem);
t_list				*ft_strsplit_lst(char const *str, char c);
uint32_t			ft_uint32_reverse(uint32_t	nbr);
void				ft_memrev(char *buf, size_t count);
void				ft_lstdelstr(void *as, size_t size);
void				ft_lstswap(t_list **head);
void				ft_lstsort(t_list **head, int (*f)(t_list *, t_list *));
void				ft_lstsortrev(t_list **head, int (*f)(t_list *, t_list *));
char				*get_substr_sep(const char *str, int pos, char sep);
char				*ft_strchr_replace(char *str, char src, char dst);
char				last_char(char *str);
#endif
