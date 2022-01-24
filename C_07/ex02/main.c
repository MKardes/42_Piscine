#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int     main(void)
{
	int     **a;
	int	**a1;
	int     *b;
	int     c;
	int     i;

	b = &c;
	a = &b;
	printf("It should print '0': %d\n", ft_ultimate_range(a, 12, 4));
	printf("It should print '6 , 4-5-6-7-8-9': %d , ", ft_ultimate_range(a, 4, 10));
	i = 0;
	while (i < 6)
	{
		printf("%d", a[0][i]);
		if (i != 5)
			printf("-");
		i++;
	}
	printf("\n");
	return (0);
}
