/*
** return nonzero if digit 0-9, zero if not
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

int	my_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
