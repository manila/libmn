/*
** Output string to stdout + newline
**
** Manuel Nila - AUgust 2017
*/

#include "libmn.h"

void	my_putendl(char const *s)
{
	my_putendl_fd(s, 1);
}
