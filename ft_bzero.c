void	ft_bzero(void *s, int nbyte)
{
	int i;

	i = 0;
	while (i != nbyte)
	{
		((char*)s)[i] = '\0';
		i++;
	}
}
