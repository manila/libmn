/*
** return uppercase equiv of char
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

char	my_toupper(char c)
{
	return (my_islower(c) ? c - 32 : c);
}
