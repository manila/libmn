/*
** Return pointer to needle in haystack upto n position
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_strnstr(const char *haystack, const char *needle, size_t n)
{	
	size_t	i;
	size_t	match_len;
	size_t	needle_len;

	i = 0;
	match_len = 0;
	needle_len = my_strlen((char *)needle);
	
	while (haystack[i] && n)
	{
		if (needle[match_len] == haystack[i])
		{
			match_len++;
			if (match_len == needle_len)
				return ((char *)&haystack[i - needle_len + 1]);
		}
		else
			match_len = 0;
		i++;
		n--;
	}
	return (NULL);
} 
