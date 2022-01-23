#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("It should print '2' : %d\n", ft_find_next_prime(-12));
	printf("It should print '2' : %d\n", ft_find_next_prime(2));
	printf("It should print '53': %d\n", ft_find_next_prime(49));
	printf("It should print '53': %d\n", ft_find_next_prime(53));
	return(0);
}
