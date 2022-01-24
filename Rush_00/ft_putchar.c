#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
