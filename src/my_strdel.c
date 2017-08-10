/*
** Free the addr of string, set pointer to NULL
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_strdel(char **as)
{
	my_memdel((void **)as);
}
