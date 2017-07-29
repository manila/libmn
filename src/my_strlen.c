/*
** return length of string with NULL terminating char
**
** Manuel Nila - July 2017
*/

#include "libmn.h"

int	my_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}
