/*
** Compare two strings, return the difference in char value
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

int	my_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
