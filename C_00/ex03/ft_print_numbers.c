#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9' )
	{
		ft_putchar(c);
		c++;
	}
}
