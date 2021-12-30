void    ft_rev_int_tab(int *tab, int size)
{
	int g;
    	int a;

    	a = 0;
	while(a <= size / 2)
	{
		g = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a - 1] = g;
		a++;
	}
}
