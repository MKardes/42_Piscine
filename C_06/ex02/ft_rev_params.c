#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int av, char **b)
{
	int	a;

	a = av;
	if (av > 1)
	{
		while (a > 1)
		{
			while (*b[a - 1] != '\0')
			{
				ft_putchar(*b[a - 1]);
				b[a - 1]++;
			}
			ft_putchar('\n');
			a--;
		}
	}
	return (0);
}
