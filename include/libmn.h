/*
** header for libmn
**
** Manuel Nila - July 2017
*/

#ifndef LIBMN_H
# define LIBMN_H

# include <unistd.h>
# include <stdlib.h>

void	my_putchar(int c);
void	my_putchar_fd(char c, int fd);
void	my_putstr(char *str);
void	my_putstr_fd(char const *s, int fd);
void	my_putnbr(int n);
void	my_putnbr_fd(int n, int fd);
void	my_putendl(char const *s);
void	my_putendl_fd(char const *s, int fd);
void	my_bzero(void *s, size_t n);
void	my_memdel(void **ap);
void	my_strdel(char **as);
void	my_strclr(char *s);
void	my_striter(char *s, void (*f)(char *));
void	my_striteri(char *s, void (*f)(unsigned int, char *));
void	*my_memset(void *s, int c, size_t n);
void	*my_memcpy(void *dest, const void *src, size_t n);
void	*my_memccpy(void *dest, const void *src, int c, size_t n);
void	*my_memmove(void *dest, const void *src, size_t n);
void	*my_memchr(const void *s, int c, size_t n);
void	*my_memalloc(size_t size);
size_t	my_strlen(char *str);
char	*my_strdup(char *s);
char	*my_strcpy(char *dest, const char *src);
char	*my_strncpy(char *dest, const char *src, size_t n);
char	*my_strcat(char *dest, const char *src);
char	*my_strncat(char *dest, const char *src, size_t n);
char	*my_strchr(const char *s, int c);
char	*my_strrchr(const char *s, int c);
char	*my_strstr(const char *haystack, const char *needle);
char	*my_strnstr(const char *haystack, const char *needle, size_t n);
char	*my_strnew(size_t size);
char	*my_strmap(char const *s, char (*f)(char));
char	*my_strmapi(char const *s, char (*f)(unsigned int, char));
char	my_tolower(char c);
char	my_toupper(char c);
int	my_atoi(const char *nptr);
int	my_strcmp(const char *s1, const char *s2);
int	my_strncmp(const char *s1, const char *s2, size_t n);
int	my_memcmp(const void *s1, const void *s2, size_t n);
int	my_isupper(int c);
int	my_islower(int c);
int	my_isdigit(int c);
int	my_isprint(int c);
int	my_isascii(int c);
int	my_isalpha(int c);
int	my_isalnum(int c);

#endif
