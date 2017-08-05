/*
** Returns first instance of c in memory with n limit
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	*my_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *b;

	i = 0;
	b = (unsigned char *)s;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return (&b[i]);
		i++;
	}
	return (NULL);
}
