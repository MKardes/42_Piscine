#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *asd = "sadab";
	char *dsa = "sadbb";

	printf("%d",ft_strncmp(asd,dsa,5));
}
