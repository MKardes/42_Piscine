#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *asd = "asdgvsdf";
	char *bcd;

	bcd = (char *)malloc(sizeof(char) * 8 + 1);
	ft_strncpy(bcd,asd,4);
	printf("It should print 'asdg': %s\n",bcd);
	ft_strncpy(bcd,asd,5);
	printf("It should print 'asdgv': %s\n",bcd);
	ft_strncpy(bcd,asd,6);
	printf("It should print 'asdgvs': %s\n",bcd);
	ft_strncpy(bcd,asd,8);
	printf("It should print 'asdgvsdf': %s\n\n",bcd);
}
