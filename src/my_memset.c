/*
** fill memory with n const bytes
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

void	*my_memset(void *s, int c, size_t n)
{
	size_t	i;
	char 	*ptr;

	i = 0;
	ptr = (char *)s;	
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
