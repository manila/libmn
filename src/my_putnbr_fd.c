/*
** prints int to file desc
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		my_putchar_fd('-', fd);
		my_putnbr_fd((n / 10) * -1, fd);
		my_putchar_fd(((n % 10) * -1) + '0', fd);
	} 
	else if (n > 0)
	{
		my_putnbr_fd(n / 10, fd);
		my_putchar_fd((n % 10) + '0', fd);
	}
}
