/*
** Outputs string to file desc
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_putstr_fd(char const *s, int fd)
{
	while (*s)
		my_putchar_fd(*s++, fd);
}
