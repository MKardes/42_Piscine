#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char	*a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		ft_putchar(a[i]);
		i++;
	}
}

void	ft_putint(int *a)
{
	int	i;

	i = 0;
	while(a[i] != '\0')
	{
		ft_putchar(a[i] + 48);
		if (a[i + 1] != '\0')
			write(1, ", ", 2);
		i++;
	}
}

int	*ft_range(int min, int max);

int	main(void)
{
	int	i;
	int	*a;
	char	*b = "It should print '2, 3, 4': ";
	char	*c = "It should print '-3, -2, -1, 0, 1, 2, 3': ";

	a = ft_range(2,5);
	ft_putstr(b);
	ft_putint(a);
	ft_putchar('\n');
	a = ft_range(-3,4);
	ft_putstr(c);
	ft_putint(a);
	ft_putchar('\n');
	return(0);
}
