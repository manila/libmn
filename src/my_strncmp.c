/*
** Compare s2 to s1 return difference in char up to n bytes
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

int	my_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
