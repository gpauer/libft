#include<stdio.h>
int	ft_strlen(const char *s)
{
	int	i;
	while (s[i] != '\0')
		i++;
	return(i);
}
