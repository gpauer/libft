#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nbr;
	int	neg;

	neg = 1;
	nbr = 0;
	i = 0;
	while ((nptr[i] >= 7 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	while (ft_isdigit(nptr[i]) > 0 || (nptr[i] == '-' && ft_isdigit(nptr[i + 1]) > 0) || (nptr[i] == '+' && ft_isdigit(nptr[i + 1]) > 0))
	{
		if (ft_isdigit(nptr[i]) == 0 && nbr != 0)
			return (nbr * neg);
		if (nptr[i] == '-')
			neg = -1;
		else if (nptr[i] == '+')
			neg = 1;
		else
			nbr = (nbr * 10) + (nptr[i] - '0');
		i++;
	}
	return (nbr * neg);
}
