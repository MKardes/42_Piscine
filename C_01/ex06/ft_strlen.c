int	ft_strlen(char *str)
{
    int	a;

    a = 0;
    while(*str != '\0')
    {
        str++;
        a++;
    }
    return (a);
}
