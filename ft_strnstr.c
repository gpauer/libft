#include "libft.h"
#include <string.h>
char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int i;
	int j;
	int len;

	len = ft_strlen(needle) - 1;
	i = 0;
	j = 0;
	while (i != n)
	{
		while (haystack[i] == needle[j] && i != n)
		{
			i++;
			j++;
			if (j == len)
			{
				return ((char*)haystack + i - j);
			}
		}
		i++;
		j = 0;
	}
	if (needle[0] == '\0')
		return ((char*)haystack);
	else
		return ('\0');
}
