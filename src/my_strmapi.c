/*
** Applies function f to each char,
** passing char index and char to f
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * my_strlen((char *)s) + 1);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
