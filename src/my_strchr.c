/*
** Return pointer to first c in str
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strchr(const char *s, int c)
{
	if (*s == (char) c)
		return ((char *)s);
	else if (!*s)
		return (NULL);
	return my_strchr(++s, c);
}
