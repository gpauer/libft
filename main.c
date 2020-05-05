#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char s1[] = "1234567890";
	char s2[] = "abcdefghij";

	strlcpy(s2, s1, 6);
	printf("%s", s2);
	return (0);
}
