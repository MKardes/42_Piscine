#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int c;

	a = size - 1;
	while (a >= 0)
	{
		b = a - 1;
		while(b >= 0)
		{
			if (tab[a] < tab[b])
			{
				c = tab[a];
				tab[a] = tab[b];
				tab[b] = c;
			}
			b--;
		}
		a--;
	}
}

int	main(void)
{
	int a[5] = {5,1,4,2,3};
	ft_sort_int_tab(a,5);
	int i = 0;
	while(i < 5)
	{
		printf("%d, ",a[i]);
		i++;
	}
}
