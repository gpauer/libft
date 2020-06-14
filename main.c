#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	*dest;
	int	i;

	i = 0;
	dest = (char*)malloc(sizeof(char) * 15);
	ft_strlcpy(dest, "", 15);
	while (i != 15)
	{
		printf("%d", dest[i]);
		i++;
	}
	return (0);
}
