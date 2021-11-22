void	yaz(int a, char as[]);
int	basamak(char *a);
int	main(int ac, char **av)
{
	if(ac != 2)
		return(0);
	else
		yaz(basamak(av[1]),av[1]);
}
