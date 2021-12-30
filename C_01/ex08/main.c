#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	i;
	int	a[5] = {5,1,4,2,3};
	
	ft_sort_int_tab(a,5);
	printf("It should print '1, 2, 3, 4, 5': ");
	i = 0;
	while(i < 5)
	{
		printf("%d",a[i]);
		if(i != 4)
			printf(", ");
		i++;
	}
	printf("\n");
	return(0);
}
