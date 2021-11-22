#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char a[] = "asd";
	char b[] = "nusrettin";

	ft_strncat(a,b,16);
	printf("%s",a); 
}
