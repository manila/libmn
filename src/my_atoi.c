/*
** Convert ascii string to int
**
** Manuel Nila - August 2017
*/

#include "libmn.h"

int	my_atoi(const char *nptr)
{
	size_t	i;
	int	nbr;
	int	neg;
	
	i = 0;
	nbr = 0;
	neg = 1;
	while (!my_isdigit((char)nptr[i]))
		i++;
	if (i && (char)nptr[i - 1] == '-')
		neg = -1;
	while (my_isdigit((char)nptr[i]))
		nbr = (nbr * 10) - ((int)nptr[i++] - '0');
	return (neg < 0 ? nbr : -(nbr));
}
