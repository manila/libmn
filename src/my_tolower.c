/*
** return lowercase char equiv
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

char	my_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
