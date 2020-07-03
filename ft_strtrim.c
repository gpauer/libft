#include <stdlib.h>
#include "libft.h"
char	*ft_strtrim(char const *s)
{
	char		*str;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;
	unsigned int	j;

	str = (char*)malloc(sizeof(s));
	if (s != 0 && str != 0)
	{
		start = 0;
		while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
			start++;
		end = ft_strlen(s) - 1;
		while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
			end--;
		j = -1;
		i = start - 1;
		while (++i != end + 1)
			str[++j] = s[i];
		str[++j] = 0;
		return (str);
	}
	else
		return (0);
}
