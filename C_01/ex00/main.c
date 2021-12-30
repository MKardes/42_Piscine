#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*p_nbr;
	int	nbr;

	nbr = 21;
	printf("It should print '21': %d\n",nbr);
	p_nbr = &nbr;
	ft_ft(p_nbr);
	printf("\nIt should print '42': %d\n",nbr);
	return(0);
}
