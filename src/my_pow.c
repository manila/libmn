/*
** raise a whole number to a whole power
** limited to int
** Manuel Nila - August 2017
*/

#include "libmn.h"

double	my_pow(int x, int y)
{
	if (y > 0)
	{
		return x * my_pow(x, --y);
	}
	return (1);
}

