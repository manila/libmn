/*
** write a string of chars to stdout
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

void	my_putstr(char *str)
{
	while (*str)
	{
		my_putchar(*str);
		str++;
	}
}
