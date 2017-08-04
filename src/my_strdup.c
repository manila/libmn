/*
** Duplicate string, return ptr to said string
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strdup(char *s)
{
	int	i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * my_strlen(s) + 1);
	
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
