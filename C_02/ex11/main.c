#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main(void)
{
	printf("It should print 'Get*\\0a*this* *\\0c*code*\\0b*line.':\n\n");
	char *str = "Get*\n*this*\f*code*\v*line.";
	ft_putstr_non_printable(str);
	printf("\n");
	return(0);
}
