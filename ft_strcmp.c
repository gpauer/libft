int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	if (s1 > s2)
		return (1);
	if (s1 < s2)
		return (-1);
	return (0);
}
