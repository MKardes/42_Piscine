#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int nbr;
        int *nbr_;
	int c;
	int     *c_;

	nbr = 1;
	c = 2;
	nbr_ = &nbr;
	c_ = &c;
	printf("It should print '1, 2': %d, %d\n\n",*nbr_,*c_);
	ft_swap(nbr_,c_);
	printf("It should print '2, 1': %d, %d\n",*nbr_,*c_);
	return(0);
}
