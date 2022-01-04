#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char asd[] = "ASDdsad";
	
	printf("It should print 'asddsad': %s\n",ft_strlowcase(asd));
	return (0);
}
