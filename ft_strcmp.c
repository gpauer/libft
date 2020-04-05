int	ft_strcmp(const char *s1, const char *s2)
{
	int i;
	unsigned int d1;
	unsigned int d2;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		d1 = s1[i];
		d2 = s2[i];
		if (d1 > d2)
			return (1);
		else if (d1 < d2)
			return(-1);
		i++;
	}
	return (0);
}
