/* 
** write a single character to stdout
** 
** Manuel Nila - July 2017
*/

#include "libmn.h"

void	my_putchar(int c)
{
	write(1, &c, 1);
}
