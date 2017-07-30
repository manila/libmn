/*
** return uppercase equiv of char
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

char	my_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
