#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	a[] = "Nusret";
	char	b[] = "tinHoca";
	char    c[] = "Nus";
	char    d[] = "tin";

	ft_strncat(c,d,3);
	printf("It should print 'Nustin': %s\n",c);
	ft_strncat(a,b,7);
	printf("It should print 'NusrettinHoca': %s\n",a);
	return (0);
}
