int	ft_sqrt(int nb)
{
	int	a;

	if (nb == 1)
		return (1);
	else if (nb > 1)
	{
		a = 0;
		while (a < nb && a < 46341)
		{
			if (a * a == nb)
				return (a);
			a++;
		}
	}
	return (0);
}
