#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int g;
    int a;

    a = 0;
    if (size % 2 == 1 )
    {
        while(a <= (size-3) / 2)
        {
            g = tab[a];
            tab[a] = tab[size-a-1];
            tab[size - a-1] = g;
            a++;
        }
    }
    else
    {
        while(a <= size/2 -1)
        {
            g = tab[a];
            tab[a] = tab[size-a-1];
            tab[size-a-1] = g;
            a++;
        }
    }
}

int    main(void)
{
    int a[5] = {1,2,3,4,5};
    int b[6] = {1,2,3,4,5,6};
    ft_rev_int_tab(a,5);
    ft_rev_int_tab(b,6);
    int i = 0;
    while(i<=4)
    {
        printf("%d, ",a[i]);
        i++;
    }
}
