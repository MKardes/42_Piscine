int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (a < power)
	{
		b *= nb;
		a++;
	}
	return (b);
}
