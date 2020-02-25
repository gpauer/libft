#include <stdio.h>
#include<strings.h>

char *ft_strncpy(char *dest, const char *src, size_t n)
{
        int     	i;
	unsigned int	j;

	j = 0;
        i = 0;
        while ((src[i] != '\0') && (j != n))
        {
                dest[i] = src[i];
                i++;
		j++;
        }
        dest[i] = '\0';
        return (dest);
}
