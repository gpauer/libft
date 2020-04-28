#include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;

	i = 0;
	while (i != n)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	return (dest);
}
