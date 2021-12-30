void	ft_ultimate_div_mod(int *a, int *b)
{
	int d;

	d = *a / *b;
	*b = *a % *b;
	*a = d;
}
