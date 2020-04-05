#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*m;

	m = malloc(size);
	return (m);
}
