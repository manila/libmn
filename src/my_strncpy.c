/*
** Copies n chars from src to dest
** if dest is bigger the rest is filled with \0.
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
