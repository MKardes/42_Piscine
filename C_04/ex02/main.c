#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putstr(int s)
{
	char	*a = "It should print '-2147483648': ";
	char    *b = "It should print '-2147'      : ";
	char    *c = "It should print '1212348'    :  ";
	int	i;

	i = 0;
	if (s == 1)
	{
		while(a[i] != '\0')
		{
			write(1, &a[i], 1);
			i++;
		}
	}
	else if (s == 2)
	{
		while(b[i] != '\0')
		{
			write(1, &b[i], 1);
			i++;
		}
	}
	else if (s == 3)
	{
		while(c[i] != '\0')
		{
			write(1, &c[i], 1);
			i++;
		}
	}
}

int	main(void)
{
	ft_putstr(1);
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putstr(2);
	ft_putnbr(-2147);
	printf("\n");
	ft_putstr(3);
	ft_putnbr(1212348);
	printf("\n");
	return(0);
}
