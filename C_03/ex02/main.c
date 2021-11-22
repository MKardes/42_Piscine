#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char a[] = "ca";
	char b[] = "asd";

	ft_strcat(a,b);
	printf("%s",a);
}
