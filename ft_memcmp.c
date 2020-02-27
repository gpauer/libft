#include <string.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (i != n)
	{
		if (((char*)s1)[i] > ((char*)s2)[i])
			return (1);
		else if (((char*)s1)[i] < ((char*)s2)[i])
			return (-1);
		else 
			i++;
	}
	return (0);
}
