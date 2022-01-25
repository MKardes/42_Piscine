#include <stdio.h>
#include <unistd.h>
#include "ft.h"

void	ft1_putstr(char *a)
{
        int     i;

        i = 0;
        while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
}	

int	main()
{
	char	a[] = "Opucaliptus";
	char	b[] = "Opucalizait";
	int	c;
	int	d;

	c = 5;
	d = 19;
	ft1_putstr("It should print 'Opucaliptus': ");
	ft_putstr(a);
	printf("\n");
	ft1_putstr("It should print 'M'          : ");
	ft_putchar('M');
	printf("\n");
	printf("It should print '11'         : %d\n", ft_strlen(a));
	printf("It should print '-10'        : %d\n", ft_strcmp(a,b));
	ft_swap(&c, &d);
	printf("It should print '19 , 5'     : %d , %d\n", c, d);
	return (0);
}
