/*
** Set n bytes to zero 
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_bzero(void *s, size_t n)
{
	size_t	i;
	char	*b;

	i = 0;
	b = (char *)s;
	while (i < n)
	{
		b[i] = 0;
		i++;
	}
}
