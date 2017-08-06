/*
** Return pointer to first c in str
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strchr(const char *s, int c)
{
	if (*s == (char) c || !s)
		return ((char *)s);
	return my_strchr(++s, c);
}
