#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char		a[] = "Hell";
	char		b[] = "Wintersall";

	printf("It should print '13': %d\n",ft_strlcat(a,b,3));
	printf("It should print '14': %d\n",ft_strlcat(a,b,7));
	printf("It should print '9': %d\n",ft_strlcat(a,b,9));
	return (0);
}
