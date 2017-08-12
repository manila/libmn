/*
** prints int to stdout
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_putnbr(int n)
{
	if (n < 0)
	{
		my_putchar('-');
		my_putnbr((n / 10) * -1);
		my_putchar(((n % 10) * -1) + '0');
	} 
	else if (n > 0)
	{
		my_putnbr(n / 10);
		my_putchar((n % 10) + '0');
	}
}
