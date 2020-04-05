#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int m;

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
	if (n == -2147483648)
		ft_putstr("2147483648");
}
