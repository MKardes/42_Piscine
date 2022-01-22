#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("It should print '1'       : %d\n", ft_iterative_power(0,0));
	printf("It should print '0'       : %d\n", ft_iterative_power(1,-2));
	printf("It should print '25 , 216': %d , %d\n", ft_iterative_power(5,2), ft_iterative_power(6,3));
	return(0);
}
