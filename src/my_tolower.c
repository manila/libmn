/*
** return lowercase char equiv
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

char	my_tolower(char c)
{
	return (my_isupper(c) ? c + 32 : c);
}
