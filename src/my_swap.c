/*
** Swap two values in memory 
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_swap(char *p1, char *p2)
{
	char temp;

	temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}
