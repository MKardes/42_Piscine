#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	a[] = "Power";
	char	b[] = "Rangers";

	ft_strcat(a,b);
	printf("It should print 'PowerRangers': %s\n",a);
	return (0);
}
