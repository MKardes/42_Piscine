#include <unistd.h>

void	ft_putchar(char a);

void    rush(int a, int b)
{
	int     x;
	int     y;

	if (a > 0 && b > 0)
	{
		y = 1;
		while (y <= b)
		{
			x = 1;
			while (x <= a)
			{
				if ((y == 1 && x == 1) ||
					(y == b && x == a && x != 1 && y != 1))
     					ft_putchar('/');
				else if ((x == 1 && y == b) || (y == 1 && x == a))
					ft_putchar('\\');
				else if (x == a || y == b || x == 1 || y == 1)
					ft_putchar('*');
				else
					ft_putchar(' ');
				x++;
			}
			ft_putchar('\n');
			y++;
		}
	}
	else
		write(1, "Warning! Bir hata var, hiç rahat yok.\n", 39);
}
