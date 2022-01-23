#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while(i < ac)
		{
			while (*av[i])
			{
				ft_putchar(*av[i]);
				av[i]++;
			}
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
