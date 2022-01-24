#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *mychar[] = {"Take", "this", "medkit"};
	printf("It should print 'Take---this---medkit': %s\n", ft_strjoin(3 ,mychar, "---"));
	return(0);
}
