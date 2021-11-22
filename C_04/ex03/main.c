#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char a[] = "+---++--123asf123";
	char b[] = "++----2asd123";

	printf("-123 olmalı :%d\n2 olmalı :%d",ft_atoi(a),ft_atoi(b));
}
