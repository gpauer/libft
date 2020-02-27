#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
        unsigned int i;

	i = 0;
	while (i != n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
			break;
		}
		if (s1[i] < s2[i])
		{
			return (-1);
			break;
		}
		i++;
	}
	return (0);
}

