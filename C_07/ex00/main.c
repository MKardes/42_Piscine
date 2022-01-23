#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*a = "First Target";

	printf("It should print 'First Target': %s\n", ft_strdup(a));
	return(0);
}
