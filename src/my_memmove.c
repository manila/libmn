/*
** Copy src in dest, can handle overlap
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	*my_memmove(void *dest, const void *src, size_t n)
{	
	size_t	i;
	unsigned char *a;
	unsigned char *b;
	
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (src > dest)
	{
		i = 0;
		while (i < n)
		{
			a[i] = b[i];
			i++;				
		}
		return (dest);
	}
	else
	{
		while (n)
		{
			n--;
			a[n] = b[n];
		}
		return (dest);
	}
}
