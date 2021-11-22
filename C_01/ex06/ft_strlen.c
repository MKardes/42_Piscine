#include <stdio.h>

int ft_strlen(char *str)
{
    int a;

    a = 0;

    while(*str != '\0')
    {
        str++;
        a++;
    }
    return a;

}

int    main(void)
{
    char *sec;

    sec = "123443";
    printf("%d",ft_strlen(sec));
}
