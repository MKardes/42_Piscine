#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	printf("It should print 'P' : \n");
	ft_is_negative(12);
	printf("\nIt should print 'P' : \n");
	ft_is_negative(0);
	printf("\nIt should print 'N' : \n");
	ft_is_negative(-32);
	printf("\n");
	return(0);
}
