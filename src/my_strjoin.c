/*
** return concatenation of string 1 and string 2
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strjoin(char const *s1, char const *s2)
{
	char		*str;
	unsigned int	total_len;

	total_len = my_strlen((char *)s1) + my_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * total_len + 1);
	while (*s1)
	{
		*str++ = *s1++;
	}
	while (*s2)
	{
		*str++ = *s2++;
	}
	*str = '\0';
	return (str - total_len);
}
