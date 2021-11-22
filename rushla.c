void	ft_putstr(char *as);
void	birler(int a);
void	onlarbas(int a, int b);

void	siftrak(int a, int b)
{
	if(a != 0 || b != 0)
	{
		ft_putstr("and");
		birler(b);
	}
}

void	yuzler(int a, char *as)
{
	if (a == 1)
                ft_putstr("one hundred");
	else if (a == 2)
                ft_putstr("two hundred");
        else if (a == 3)
                ft_putstr("three hundred");
        else if (a == 4)
                ft_putstr("four hundred");
        else if (a == 5)
                ft_putstr("five hundred");
        else if (a == 6)
                ft_putstr("six hundred");
        else if (a == 7)
                ft_putstr("seven hundred");
        else if (a == 8)
                ft_putstr("eight hundred");
        else if (a == 9)
                ft_putstr("nine hundred");
	if ((as[1] != 48 || as[2] != 48) && as[1] != '0')
	{
		ft_putstr("and");
		onlarbas(as[1] - 48, as[2] - 48);
	}
	else
		siftrak(as[1] - 48, as[2] - 48);
}

void	binler(int a, char *as)
{
	if (a == 4)
	{
		birler(as[0] - 48);
		ft_putstr("thousand");
		yuzler(as[1] - 48, &as[1]);
	}
	else if (a == 5)
	{
		onlarbas(as[0] - 48, as[1] - 48);
		ft_putstr("thousand");
		yuzler(as[2] - 48, &as[2]);
	}
	else if (a == 6)
	{
		yuzler(as[0] - 48, as);
		ft_putstr("thousand");
		yuzler(as[3] - 48, &as[3]);
	}
	else if (a == 3)
		yuzler(as[0] - 48, as);
}

int     gecisler(char *as)
{
        int     i;

        i = 0;
        while (i < 3)
        {
                if (as[i] != '0')
                        return(i + 1);
                i++;
        }
        return(4);
}
