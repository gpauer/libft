#include <stddef.h>
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char		*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (s != 0)
	{
		while (s[i + start] != 0 && i != len)
		{
			str[i] = s[i + start];
			i++;			
		}
		str[i] = 0;
		return (str);
	}
	else
		return (0);
}
