/*
** Allocate a "fresh" string, initialized with \0 
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strnew(size_t size)
{
	char *ptr;
	
	ptr = (char *)my_memalloc(sizeof(char) * size);
	my_bzero((void *) ptr, size);
	return (ptr);
}
