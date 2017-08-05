/*
** Copies src to dest with null terminating char
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strcpy(char *dest, const char *src)
{
	int i;
	
	i = 0;	
	while (dest[i])
	{
		dest[i] = *src;
		if (*src)
			src++;
		i++;
	}
	dest[i] = *src;
	return (dest);
}
