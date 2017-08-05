/*
** compare two memory values to n pointer
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

int	my_memcmp(const void *s1, const void *s2, size_t n)
{
	if (*(unsigned char *) s1 == *(unsigned char *) s2 && n)
	{
		return my_memcmp(++s1, ++s2, --n);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
