/*
** Return ascii string representation of int
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

char	*my_itoa(int n)
{
	char	*str;
	int	len;
	int	n_cpy;

	len = 0;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	n_cpy = n;
	while (n_cpy > 0)
	{
		n_cpy /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * len + 1);
	str[0] = '-';
	str[len] = '\0';
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
