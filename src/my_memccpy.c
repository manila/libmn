/*
** copy n bytes from dest, stop at first instance of c
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	*my_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char 	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
