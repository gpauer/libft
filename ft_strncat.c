#include <stdlib.h>
#include <strings.h>
char    *ft_strncat(char *dest, const char *src, size_t n)

{
	int     	i;
        unsigned int	j;

        i = 0;
        j = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        while (src[j] != '\0' && j != n)
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (dest);
}
