#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int i;

	i = 0;
	while (i != size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i != size)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}
