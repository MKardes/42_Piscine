#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("It should print '-1': %d\n", ft_fibonacci(-12));
	printf("It should print '0' : %d\n", ft_fibonacci(0));
	printf("It should print '55': %d\n", ft_fibonacci(10));
	return(0);
}
