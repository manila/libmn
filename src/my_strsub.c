/*
** Return copy of substring starting at start,
** going to len chars.
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	
	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;	
	}
	str[i] = '\0';
	return (str);
}
