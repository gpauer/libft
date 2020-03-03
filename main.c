#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("%s" ,ft_strnstr("123 4567890", "45", 5));
	return 0;
}
