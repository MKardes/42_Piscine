#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (!(b == 0))
	{
	*div = a / b;
	*mod = a % b;
	printf("%d,%d",*div,*mod);
	}
}

int	main(void)
{
	int x;
	int y;
	int *a_;
	int *b_;

	a_ = &x;
	b_ = &y;
	ft_div_mod(12,-10,a_,b_);
}
