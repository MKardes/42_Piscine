#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	len = max - min;
	range[0] = (int *)malloc(len * sizeof(int));
	if (!*range)
		return (-1);
	while (min < max)
	{
		range[0][i] = min ;
		min++;
		i++;
	}
	return (len);
}
#include<stdio.h>
int	main()
{
	int **a;
	int *b;
	int c;
	int len;
	int i=0;

	b = &c;
	a = &b;
	len = ft_ultimate_range (a, 4, 10);
	printf("%d\n", len);
	while(i<len)
	{
		printf("%d", a[0][i]);
		i++;
	}
	printf("\n");
}
