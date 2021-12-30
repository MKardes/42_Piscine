#include <stdio.h>

char 	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "asdasd";
	char dest[6];

	ft_strcpy(dest,src);
	printf("It should print 'asdasd': %s\n",dest);
}
