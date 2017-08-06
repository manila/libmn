/*
** Append src to dest up to n bytes
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strncat(char *dest, const char *src, size_t n)
{
	size_t strlen;
	size_t i;

	strlen = my_strlen(dest);
	i = 0;
	while (*src && i < n)
	{
		dest[i + strlen] = *src++;
		i++;
	}
	dest[i + strlen] = '\0';
	return (dest);
}
