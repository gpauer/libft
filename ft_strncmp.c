#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
        unsigned int i;
	unsigned int d1;
	unsigned int d2;

	i = 0;
	while (i != n)
	{
		d1 = s1[i];
		d2 = s2[i];
		if (d1 > d2)
			return (1);
		else if (d1 < d2)
			return (-1);
		else
			i++;
	}
	return (0);
}

