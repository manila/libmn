/*
** Return 1 if strings are identical, 0 if not
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

int	my_strequ(char const *s1, char const *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (!*s1 && !*s2)
		return (1);
	else
		return (0);
}
