void	ft_putstr(char *as);
void	birler(int a);
void	onlarbas(int a, int b);
void	yuzler(int a, char *as);
void	binler(int a, char *as);
int     gecisler(char *as);


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
