#include <stdlib.h>
char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char		*str;

	i = 0;
	if (f != 0 && s != 0)
	{
		str = (char*)malloc(sizeof(s));
		while (s[i] != 0)
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = 0;
		return (str);
	}
	else
		return (0);
}
