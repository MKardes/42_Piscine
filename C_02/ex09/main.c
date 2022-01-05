#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char asd[] = "lIfE IS hELl fOr seNSitiVe heARTs.";

	printf("It should print 'Life Is Hell For Sensitive Hearts.': %s\n", ft_strcapitalize(asd));
}
