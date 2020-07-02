#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
char	test(unsigned int i, char c)
{
	char a;
	a = c + 1;
	ft_putnbr(i);
	return (a);
	
}

int	main(void)
{
	char	str[] = "hello\0";
	char	*str2;
	ft_putstr(str + '\0');
	str2 = ft_strmapi(str, test);
	ft_putstr(str2);
	return (0);
}
