#include <unistd.h>

void    ft_putchar(char a)
{
    write(1, &a, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int main(void)
{
    char *a = "asdasdv";
    ft_putstr(a);
}
