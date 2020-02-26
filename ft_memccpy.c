#include <string.h>
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int            i;

        i = 0;
        while (i != n)
        {
                ((char*)dest)[i] = ((char*)src)[i];
		if (((char*)src)[i] == c)
		{
			((char*)dest)[i] = '\0';
			return (dest);	
		}
		i++;
        }
        ((char*)dest)[i] = '\0';
        return (dest);
}
