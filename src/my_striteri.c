/*
** Applies f to each char in string, passes index and char to f
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;
	
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
