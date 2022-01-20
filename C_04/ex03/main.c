#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char a[] = "  +---++--123asf123";
	char b[] = "   ++----28523";

	printf("It should print '-123' : %d\nIt should print '28523': %d\n",ft_atoi(a),ft_atoi(b));
	return (0);
}
