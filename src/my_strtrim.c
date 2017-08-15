/*
** Return a copy of string with out whitespace(s) 
** at the beginning or end (' ', '\n', '\t');
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strtrim(char const *s)
{
	int	ccount;
	
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	
	ccount = my_strlen((char *)s) - 1;
	while (s[ccount] == ' ' || s[ccount] == '\n' || s[ccount] == '\t')	
		ccount--;

	return (my_strsub(s, 0, ccount + 1));
}
