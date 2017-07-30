/*
** header for libmn
**
** Manuel Nila - July 2017
*/

#ifndef LIBMN_H
# define LIBMN_H

# include <unistd.h>

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
char	my_tolower(char c);
char	my_toupper(char c);
int	my_isupper(int c);
int	my_islower(int c);
int	my_isdigit(int c);
int	my_isprint(int c);
int	my_isascii(int c);
int	my_isalpha(int c);
int	my_isalnum(int c);

#endif
