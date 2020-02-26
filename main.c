#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char buffer[80];
	char *msg = "This is the string: not copied";
    memset( buffer, '\0', 80 );
    memccpy( buffer, msg, ':', 80 );

    printf( "%s\n", buffer );
	return (0);
}
