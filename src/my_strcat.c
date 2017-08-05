/*
** Copy src to dest replacing \0 in dest,
** and adding a null termination to the end of dest
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strcat(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
