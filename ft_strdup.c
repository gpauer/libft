#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int	i;

	i = 0;
	str = (char*)malloc(sizeof(s));
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = s[i];
	return (str);
}
