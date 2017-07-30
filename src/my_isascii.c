/*
** Returns non-zero if value is in ascii table, zero if not
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

int	my_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
