#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*a;
	char	*b;

	a = "132123";
	b = "1421a12";
	printf("It should print '1': %d\nIt should print '0': %d\n", ft_str_is_numeric(a), ft_str_is_numeric(b));
	return(0);
}
