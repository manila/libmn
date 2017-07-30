/*
** Returns non-zero if char is printable, zero if not
**
** Manuel Nila - July 2017
*/

int	my_isprint(char c)
{
	return (c >= 32 && c < 127);
}
