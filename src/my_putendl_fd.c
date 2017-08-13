/*
** Outputs string to file desc followed by /n
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_putendl_fd(char const *s, int fd)
{
	my_putstr_fd(s, fd);
	my_putchar_fd('\n', fd);
}
