/*
** Outputs char to file desc
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
