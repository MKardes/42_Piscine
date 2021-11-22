int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	j;
	unsigned int	a;

	a = 0;
	j = 0;
	while ((*s1 != '\0' || *s2 != '\0') && a < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		a++;
	}
	return (0);
