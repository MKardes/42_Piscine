#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*b;
	char	*a;
	
	b = "Unprintables: \t (tab), \a (?)";
	a = "asdadsdasd";
	printf("It should print '1': %d\nIt should print '0': %d\n",ft_str_is_printable(a),ft_str_is_printable(b));
	return(0);
}
