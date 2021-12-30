#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int x;
	int y;
	int *a_;
	int *b_;

	a_ = &x;
	b_ = &y;
	ft_div_mod(25,2,a_,b_);
	printf("It should print '12, 1': %d, %d\n",x,y);
	return(0);
}
