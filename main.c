#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	dest0[] = "1234567890";
	char	dest1[] = "1234567890";
//	printf("%s\n", (char*)(dest + 2));
//	printf("%s\n", (char*)dest);
	ft_memmove(dest0, "abc987", 10);
	memmove(dest1, (15,14,12), 10);
	printf("%d", memcmp(dest0, dest1, 10));
	return (0);
}
