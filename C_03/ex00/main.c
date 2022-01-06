#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*a = "asdb";
	char	*c = "asdb";
	char	*b = "asdz";

	printf("It should be less than 0: %d\n",ft_strcmp(a,b));
	printf("It should be more than 0: %d\n",ft_strcmp(b,a));
	printf("It should equal 0: %d\n",ft_strcmp(a,c));
	return (0);
}
