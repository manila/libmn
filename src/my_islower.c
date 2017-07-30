/*
** returns non-zero if param is lowercase ASCII, zero if not
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

int	my_islower(int c)
{
	return (c >= 97 && c <= 122);
}
