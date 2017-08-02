/*
** copy n bytes to dest memory
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	*my_memcpy(void *dest, const void *src, size_t n)
{
	char	*b;

	b = (char *)dest;
	while (n)
		b[n--] = *(char *)src++;
	return (dest);
}
