#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int    main(void)
{
	int	i;
	int	a[5] = {1,2,3,4,5};
	
	ft_rev_int_tab(a,5);
	printf("It should print '5, 4, 3, 2, 1': ");
	i = 0;
	while(i <= 4)
	{
		printf("%d",a[i]);
		if (i != 4)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
