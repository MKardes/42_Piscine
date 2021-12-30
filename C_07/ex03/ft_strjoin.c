#include <stdlib.h>
#include <stdio.h>

int	sayac(int size, char **str, char *s)
{
	int	i;
	int	a;
	int	b;
	int	c;
	
	i = 0;
	a = 0;
	while(a < size)
	{
		b = 0; 
		while(str[a][b] != '\0')
		{
			b++;
			i++;
		}
		a++;
	}
	b = 0;
	while(s[b] != '\0')
		b++;
	c = (a - 1) * b;
	return(i + c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int	i1;
	int	i2;
	int	c;
	
	s = (char *)malloc(sayac(size, strs, sep) + 1);
	i1 = 0;
	c = 0;
	while (i1 < size)
	{
		i2 = 0;
		while (strs[i1][i2] != '\0')
			s[c++] = strs[i1][i2++];
		i2 = 0;
		while (sep[i2] != '\0' && i1 != size - 1)
			s[c++] = sep[i2++];
		i1++;
	}
	s[c] = '\0';
	return (s);
}

int main(int ac, char **av)
{
	char *mychar[] = {"uasd", "ddsa", "asd", "emeha"};
	printf("%s$\n", ft_strjoin(4 ,mychar, "-----"));
}
