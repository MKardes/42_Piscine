#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

void	function(void)
{
	int	i;
	char	*a = "It should print 'Love is war.': ";
	
	i = 0;
	while(a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
}

int	main(void)
{
	char	a[] = "Love is war.";

	function();	
	ft_putstr(a);
	printf("\n");
	return(0);
}
