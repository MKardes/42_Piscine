#include <stdio.h>

char 	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "asdasd";
	char *dest;

	ft_strcpy(dest,src);
	printf("%s",dest);
}
