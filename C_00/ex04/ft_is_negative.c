#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'N' ;
	b = 'P' ;
	if (n < 0)
	{
		ft_putchar(a);
	}
	else
		ft_putchar(b);
}
