#include <stddef.h>
#include <stdlib.h>
char	*ft_strnew(size_t size)
{
	char		*str;
	unsigned int	i;

	str = (char*)malloc(sizeof(char) * size);
	i = 0;
	if (str)
	{
		while (i != size)
		{
			str[i] = '\0';
			i++;
		}
		str[size] = '\0';
		return (str);
	}
	else
		return (NULL);
}
