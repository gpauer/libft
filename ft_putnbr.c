#include "libft.h"

void	ft_putnbr(int n)
{
	int m;

	if (n < 0)
	{
		ft_putchar('-');
		n = (n * -1);
	}
	if (n > 0)
	{
		m = n % 10;
		n = n / 10;
		ft_putnbr(n);
		ft_putchar(m + '0');
	}
	else
		ft_putchar('0');
}
