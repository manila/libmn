/*
** return length of string with NULL terminating char
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

size_t	my_strlen(char *str)
{
	size_t i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}
