/*
** copy n bytes to dest memory
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	*my_memcpy(void *dest, const void *src, size_t n)
{
	char	*b;
	char	*s;

	b = (char *)dest;
	s = (char *)src;
	while (n--)
		b[n] = s[n];
	return (dest);
}
