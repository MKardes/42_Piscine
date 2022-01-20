unsigned int	ft_strlen(char *str)
{
	unsigned int	c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	i;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	a = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && a + 1 < size)
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
