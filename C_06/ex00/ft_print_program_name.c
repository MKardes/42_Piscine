#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int ac, char **av)
{
	if (ac > 0)
	{
		while (*av[0])
		{
			ft_putchar(*av[0]);
			av[0]++;
		}
		write(1, "\n", 1);
		return (0);
	}
}
