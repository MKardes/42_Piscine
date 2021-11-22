#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char *asd = "asdgvsdf";
	char *bcd;

	ft_strncpy(bcd,asd,8);
	printf("%s",bcd);
}
