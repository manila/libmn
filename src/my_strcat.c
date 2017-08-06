/*
** Copy src to dest replacing \0 in dest,
** and adding a null termination to the end of dest
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strcat(char *dest, const char *src)
{
	char *ptr = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}
