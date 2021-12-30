#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int     nbr;
	int     *nbr1;
	int     **nbr2;
	int     ***nbr3;
	int     ****nbr4;
	int     *****nbr5;
	int     ******nbr6;
	int     *******nbr7;
	int     ********nbr8;
	int     *********nbr9;

	nbr = 12;
	nbr1 = &nbr;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	printf("It should print '12': %d\n", nbr);
	ft_ultimate_ft(nbr9);
	printf("\nIt should print '42': %d\n", nbr);
	return(0);
}
