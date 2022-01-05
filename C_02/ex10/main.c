#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char asd[] = "asdasdsadweq";
	char bcd[] = "";

	printf("It should print '12, asd': %d, %s\n", ft_strlcpy(bcd, asd, 4), bcd);
	return (0);
}
