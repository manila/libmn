/*
** return non-zero if param is in range A-Z or a-z, zero if not
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

int	my_isalpha(int c)
{
	return (my_islower(c) || my_isupper(c));
}
