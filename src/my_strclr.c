/*
** Set every char in string to \0
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_strclr(char *s)
{
	my_bzero((void *)s, my_strlen(s));	
}
