/*
** Return 1 if strings are identical up to n, 0 if not
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

int	my_strnequ(char const *s1, char const *s2, size_t n)
{
	while (*s1 == *s2 && *s1 && *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1 == *s2 && n <= 1)
		return (1);
	else
		return (0);
}
