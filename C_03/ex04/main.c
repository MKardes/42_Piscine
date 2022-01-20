#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	a[] = "Hüzüntü";
	char	b[] = "üz";

	printf("It should print 'üzüntü': %s\n", ft_strstr(a, b));
	return (0);
}
