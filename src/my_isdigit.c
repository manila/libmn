/*
** return nonzero if digit 0-9, zero if not
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

int	my_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
