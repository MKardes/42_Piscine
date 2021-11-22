int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			a = a * nb;
			nb--;
		}
	}
	return (a);
}
