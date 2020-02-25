#include "libft.h"
#include "stdio.h"

void	ft_putnbr(int n)
{
	int m;

	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n < 10 && n >= 0)
		ft_putchar(n + '0');
	else if (n >= 0)
	{
		m = n % 10;
		n = n / 10;
		ft_putnbr(n);
		ft_putchar(m + '0');
	}
}
