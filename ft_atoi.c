#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int nbr;
	int i;
	int j;
	
	nbr = 0;
	i = ft_strlen(nptr);
	j = 1;
	while (--i >= 0)
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			nbr += ((nptr[i] - '0') * j);
			j *= 10;
		}
		if (nptr[i] == '-')
		{
			nbr *= -1;
		}
	}
	return (nbr);
}
