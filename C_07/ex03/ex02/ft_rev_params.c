#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		int	i;

		i = ac - 1;
		while (i >= 0)
		{
			while(*av[i])
			{
				write(1, av[i], 1);
				av[i]++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
