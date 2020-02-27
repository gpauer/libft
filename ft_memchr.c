#include <string.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (i != n)
	{
		if (((char*)s)[i] == c)
		{
			return (((char*)s) + i);
		}
		else
			i++;
	}
	return ('\0');
}
