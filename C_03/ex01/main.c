#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	a[] = "people";
	char	b[] = "peopIe";
	char	c[] = "peopIe";

	printf("It should be more than 0: %d\n",ft_strncmp(a,b,6));
	printf("It should be less than 0: %d\n",ft_strncmp(b,a,6));
	printf("It should equal 0: %d\n",ft_strncmp(c,b,6));
	printf("It should equal 0: %d\n",ft_strncmp(a,b,4));
	return (0);
}
