#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	b;

	b = 'z';
	while (b >= 'a' )
	{
		ft_putchar(b);
		b--;
	}
}
