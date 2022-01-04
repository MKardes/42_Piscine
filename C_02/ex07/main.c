#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	asd[] = "Hello World";

	printf("It should print 'HELLO WORLD': %s\n", ft_strupcase(asd));
	return (0);
}
