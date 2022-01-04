#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*a;
	char	*b;

	b = "asdAfe";
	a = "asd";
	printf("It should print '1': %d\nIt should print '0': %d\n",ft_str_is_lowercase(a),ft_str_is_lowercase(b));
	return(0);
}
