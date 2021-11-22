#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(unsigned char a)
{
	char	*asd;

	asd = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(asd[a / 16]);
	ft_putchar(asd[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < ' ' || str[i] > '~'))
			ft_putchar(str[i]);
		else
			hex(str[i]);
		i++;
	}
}

int main(void)
{
    char *str = "asdasdsad\rasd\fs\vdf";
    ft_putstr_non_printable(str);
    printf("\n%s",str);
}
