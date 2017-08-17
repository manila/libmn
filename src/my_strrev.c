/*
** reverse a string
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strrev(char *str)
{
	int	i;
	int	len;
	
	i = 0;
	len = my_strlen(str) - 1;

	if (len % 2 != 0)
		len -= 1;

	while (i < len / 2)
	{
		my_swap(&(str[i]), &(str[len - i]));
		i++;
	}
	return (str);
}
