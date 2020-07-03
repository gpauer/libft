#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
int	main(void)
{
	char *s1 = "hello" ;
	char *s2;
	ft_putchar('1');
	s2 = ft_strtrim(s1);
	ft_putstr(s2);
	ft_putchar('1');
	return (0);
}
