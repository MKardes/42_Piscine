#include <unistd.h>

void ft_putchar(char a);

void	rush(int a, int b)
{
	int	x;
	int	y;

	y = 1;
	if(a > 0 && b > 0)
	{
		while (y <= b)
		{
			x = 1;
			while (x <= a)
			{
				if ((x == 1 && (y == 1 || y == b)) ||
					(x == a && (y == 1 || y == b)))
					ft_putchar('o');
				else if (y == 1 || y == b)
					ft_putchar('-');
				else if (x == 1 || x == a)
					ft_putchar('|');
				else
					ft_putchar(' ');
				x++;
			}
			write(1, "\n", 1);
			y++;
		}
	}
	else
		write(1, "Warning! Bir hata var, hiç rahat yok.\n", 39);
}
