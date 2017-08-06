/*
** Returns last occurance of c in str 
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strrchr(const char *s, int c)
{
	int	i;

	i = my_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
