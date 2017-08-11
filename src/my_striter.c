/*
** Applies a function f to, f takes ptr to char
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_striter(char *s, void (*f)(char *))
{
	if (*s)
	{
		f(s);
		my_striter(++s, f);
	}
}
