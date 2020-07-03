#include <stdlib.h>
char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*str;
	unsigned int	i;
	unsigned int	j;
	str = (char*)malloc(sizeof(s1) + sizeof(s2));
	if (s1 != 0 && s2 != 0 && str != 0)
	{
		i = -1;
		j = -1;
		while (s1[++i] != 0)
			str[i] = s1[i];
		while (s2[++j] != 0)
			str[i + j] = s2[j];
		str[i + j] = 0;
		return (str);
	}
	else 
		return (0);
}
