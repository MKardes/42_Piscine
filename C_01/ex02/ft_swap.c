#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int	*d;

	*d = *a;
	*a = *b;
	*b = *d;
}

int	main(void)
{
	int nbr;
	int *nbr_;
	int c;
	int	*c_;

	nbr = 1;
	c = 2;
	nbr_ = &nbr;
	c_ = &c;
	printf("%d,%d\n",*nbr_,*c_);
	ft_swap(nbr_,c_);
	printf("%d,%d",*nbr_,*c_);
}
