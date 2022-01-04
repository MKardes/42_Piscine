#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*a;
	char	*b;

	b = "asdADasf";
	a = "ASDFEAF";
	printf("It should print '1': %d\nIt should print '0': %d\n",ft_str_is_uppercase(a),ft_str_is_uppercase(b));
	return(0);
}
