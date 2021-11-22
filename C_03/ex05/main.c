#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char *a = "aSDDasd";
	char *b = "sad";

	printf("%d",ft_strlcat(a,b,4));
}
