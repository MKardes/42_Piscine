#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char *asd;

	asd = "asd";
	asd[1] = 12;
	asd[2] = 13;
	printf("%d", ft_str_is_printable(asd));
}
