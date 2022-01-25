#include <unistd.h>

void	ft_putstr(char *as)
{
	int	i;

	i = 0;
	while (as[i] != '\0')
	{
		write(1, &as[i], 1);
		i++;
	}
	write(1, " ", 1);
}

void	on(int a)
{
	if (a == 0)
                ft_putstr("ten");
	else if (a == 1)
		ft_putstr("eleven");
        else if (a == 2)
                ft_putstr("twelwe");
        else if (a == 4)
                ft_putstr("fourteen");
        else if (a == 6)
                ft_putstr("sixteen");
        else if (a == 7)
                ft_putstr("seventeen");
        else if (a == 3)
                ft_putstr("thirteen");
        else if (a == 5)
                ft_putstr("fifteen");
        else if (a == 9)
                ft_putstr("nineteen");
        else if (a == 8)
                ft_putstr("eighteen");	
}

void	birler(int a)
{
	if (a == 0)
		ft_putstr("zero");
	else if (a == 2)
		ft_putstr("two");
	else if (a == 4)
		ft_putstr("four");
	else if (a == 6)
		ft_putstr("six");
	else if (a == 7)
		ft_putstr("seven");
	else if (a == 1)
		ft_putstr("one");
	else if (a == 3)
		ft_putstr("three");
	else if (a == 5)
		ft_putstr("five");
	else if (a == 8)
		ft_putstr("eight");
	else if (a == 9)
		ft_putstr("nine");
}

void	onlarbas(int a, int b)
{
	if (a == 1)
		on(b);
	else if (a == 2)
		ft_putstr("twenty");
	else if (a == 3)
		ft_putstr("thirty");
	else if (a == 4)
		ft_putstr("forty");
	else if (a == 5)
		ft_putstr("fifty");
	else if (a == 6)
		ft_putstr("sixty");
	else if (a == 7)
		ft_putstr("seventy");
	else if (a == 8)
		ft_putstr("eighty");
	else if (a == 9)
		ft_putstr("ninety");
	if(a != 1 && b > 0)
		birler(b);
}

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

void	milyon(int a, char *as)
{
	if (a == 7)
        {
                birler(as[0] - 48);
                ft_putstr("million");
                binler(7 - gecisler(&as[1]), &as[gecisler(&as[1])]);
        }
        else if (a == 8)
        {
                onlarbas(as[0] - 48, as[1] - 48);
                ft_putstr("million");
                binler(7 - gecisler(&as[2]), &as[gecisler(&as[2]) + 1]);
        }
        else if (a == 9)
        {
                yuzler(as[0] - 48, as);
                ft_putstr("million");
                binler(7 - gecisler(&as[3]), &as[gecisler(&as[3]) + 2]);
        }

}

void	milyar(int a, char *as)
{
	if (a == 10)
        {
                birler(as[0] - 48);
                ft_putstr("billion");
                milyon(10 - gecisler(&as[1]), &as[gecisler(&as[1])]);
        }
        else if (a == 11)
        {
                onlarbas(as[0] - 48, as[1] - 48);
                ft_putstr("billion");
                milyon(10 - gecisler(&as[2]), &as[gecisler(&as[2]) + 1]);
        }
        else if (a == 12)
        {
                yuzler(as[0] - 48, as);
		ft_putstr("billion");
                milyon(10 - gecisler(&as[3]), &as[gecisler(&as[3]) + 2]);
        }

}

void	yaz(int a, char as[])
{
	int	b;

	b = as[0] - 48;
	if (a == 3123)
		ft_putstr("Bir hata var,\nHiç rahat yok!");
	else if(as[0] != '0' || as[1] == '\0')
	{
		if (a == 1)
			birler(b);
		else if (a == 2)
			onlarbas(as[0] - 48, as[1] - 48);
		else if (a == 3)
			yuzler(as[0] - 48, as);
		else if (a >= 4 && a <= 6)
			binler(a,as);
		else if (a >= 7 && a <= 9)
			milyon(a,as);
		else if (a >= 10 && a <= 12)
			milyar(a,as);
		else
			ft_putstr("Abarttın biraz sanki hee ?\nDüzgün bir sayı yaz şuraya!!! :-|");
	}
	else
		ft_putstr("Başa sıfır koyma\nKafam karışıyor! :(");
}

int	basamak(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		if(a[i] < '0' || a[i] > '9')
			return(3123);
		i++;
	}
	return(i);
}
int	main(int ac, char **av)
{
	if(ac != 2)
		return(0);
	else
		yaz(basamak(av[1]),av[1]);
}
