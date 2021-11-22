#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char asd[] = "asdasdsadweq";
	char bcd[] = "";

	printf("%d", ft_strlcpy(bcd, asd, 2));
	printf("\n%s", bcd);
}
