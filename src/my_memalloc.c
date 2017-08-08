/*
** Allocate "fresh" memory area, initialized to 0
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

void	*my_memalloc(size_t size)
{
	void *ptr;
	
	ptr = (void *)malloc(size);
	my_bzero(ptr, size);
	return (ptr);
}
