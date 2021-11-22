#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *a = "asdb";
	char *b = "asdd";
	int z;

	z = ft_strcmp(a,b);
	if (z > 0)
		printf("2.sayi kucuk");
	else if (z == 0)
		printf("iki sayi birbirine esit");
	else
		printf("1.sayi kucuk");
}
