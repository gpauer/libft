#include "libft.h"
int	ft_strequ(char *s1, char *s2)
{
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
