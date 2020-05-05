#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		((char*)dest)[i] = ((char*)src)[i];
		if (((char*)src)[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
