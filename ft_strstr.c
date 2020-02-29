#include "libft.h"
char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int len;

	len = ft_strlen(needle) - 1;
	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			if (j == len)
				return((char*)haystack + i - j);
			i++;
			j++;
			if (haystack[i] != needle[j])
				i--;
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return ('\0');
}
