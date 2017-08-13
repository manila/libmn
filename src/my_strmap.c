/*
** Applies function to each char of string,
** return "fresh" string when finished
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;
	
	i = 0;
	str = (char *)malloc(sizeof(char) * my_strlen((char *)s) + 1);

	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
