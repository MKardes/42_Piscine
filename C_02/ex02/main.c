#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *a;
	char *b;


	a = "aas";
	b = "as21fç";
	printf("It should print '1': %d\nIt should print '0': %d\n",ft_str_is_alpha(a),ft_str_is_alpha(b));
	return(0);
}
