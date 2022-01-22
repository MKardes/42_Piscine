#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("It should print '1 , 1'    : %d , %d\n", ft_recursive_factorial(0), ft_recursive_factorial(1));
	printf("It should print '0'        : %d\n", ft_recursive_factorial(-2));
	printf("It should print '120 , 720': %d , %d\n", ft_recursive_factorial(5), ft_recursive_factorial(6));
	return(0);
}
