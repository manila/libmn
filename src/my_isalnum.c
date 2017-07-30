/*
** returns non-zero if char is 0-9, A-Z, or a-z, zero if not
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

int	my_isalnum(int c)
{
	return (my_isalpha(c) || my_isdigit(c));
}
