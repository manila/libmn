/*
** Returns non-zer if Uppercase ASCII, zero if not
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

int	my_isupper(int c)
{
	return (c >= 65 && c <= 90);
}
