int	ft_atoi(char *str)
{
	int	i;
	int	temp;

	i = 1;
	temp = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n'
		|| *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		temp = (temp * 10) + (*str - '0');
		str++;
	}
	return (i * temp);
}
