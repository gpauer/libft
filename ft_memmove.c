#include <string.h>
#include <stdlib.h>
#include "libft.h"
void    *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned int            i;
	char			*buf;

	buf = (char*)malloc(sizeof(src));
	i = 0;
	while (ft_isascii(((char*)src)[i]) != 0)
	{
		buf[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (i != n)
	{
		((char*)dest)[i] = buf[i];
		i++;
	}
	return (dest);
}
