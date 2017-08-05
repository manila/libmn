/*
** Copies src to dest with null terminating char
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strcpy(char *dest, const char *src)
{
	size_t	i;
	
	i = 0;	
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
