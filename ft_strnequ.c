#include "libft.h"
int	ft_strnequ(char *s1, char *s2, size_t n)
{
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}
