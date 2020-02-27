#include "libft.h"
char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int len;

	len = ft_strlen(needle) - 1;
	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (j == len)
			{
				return ((char*)haystack + i - j);
				break;
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
