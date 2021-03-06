#include "libft.h"
char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	j;

	if (needle[0] == 0)
		return ((char*)haystack);
	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char*)haystack + i - j);
			if (haystack[i] != needle[j])
				j = 0;
		}
		else if (haystack[i] != needle[j])
			i++;	
	}
	return ('\0');
}
