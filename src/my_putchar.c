/* 
** write a single character to stdout
** 
** Manuel Nila - July 2017
*/

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}
