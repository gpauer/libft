#include <string.h>
#include <stdlib.h>
void    *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned int            i;
	char			*buf;

        i = 0;
	buf = (char*)malloc(sizeof(char) * (n + 1));
        while (i != n)
        {
                buf[i] = ((char*)src)[i];
                i++;
        }
        buf[i] = '\0';
	i = 0;
	while (buf[i] != '\0')
	{
		((char*)dest)[i] = buf[i];
		i++;
	}
	((char*)dest)[i] = buf[i];
        return (dest);
}
