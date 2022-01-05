unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("\n%s\n\n",src);
	return (ft_strlen(src));
}
