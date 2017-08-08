/*
** Free memory pointer, return ptr to NULL
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	my_memdel(void	**ap)
{
	free(*ap);
	ap = NULL;
}
