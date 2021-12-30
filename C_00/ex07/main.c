#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	printf("\nIt should print '42' : \n");
	ft_putnbr(42);
	printf("\nIt should print '-2147483648' : \n");
	ft_putnbr(-2147483648);
	printf("\nIt should print '-4242' : \n");
	ft_putnbr(-4242);
	printf("\n");
	return(0);
}
