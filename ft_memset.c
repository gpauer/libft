#include <string.h>
void	*ft_memset(void *str, int c, size_t n)
{
	char		ch;
	unsigned int	i;

	ch = c;
	i = 0;
	while (i != n)
	{
		((char*)str)[i] = ch;
	}
	return (str);
}
