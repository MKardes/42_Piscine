#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char a[] = "musabiler";
	char b[] = "abi";

	printf("%s\n", ft_strstr(a, b));
}
