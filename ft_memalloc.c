#include <strings.h>
#include <stdlib.h>
void	*ft_memalloc(size_t size)
{
	void	*m;

	m = malloc(size);
	m = 0;
	if (m != 0)
		return ('\0');
	else
		return (m);
}
