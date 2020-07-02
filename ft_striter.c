void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;

	i = 0;
	if (s != 0 && f != 0)
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
}
