#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int ac, char **av)
{
	int	a;

	a = 1;
	if (ac > 1)
	{
		while (a < ac)
		{
			while (*av[a] != '\0')
			{
				ft_putchar(*av[a]);
				av[a]++;
			}
			write(1, "\n", 1);
			a++;
		}
	}
	return (0);
}
