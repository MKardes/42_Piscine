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

