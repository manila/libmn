/*
** fill memory with n const bytes
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

void	*my_memset(void *s, int c, size_t n)
{
	char 	*ptr;

	ptr = (char *)s;	
	while (n)
		ptr[--n] = c;
	return (s);
}
