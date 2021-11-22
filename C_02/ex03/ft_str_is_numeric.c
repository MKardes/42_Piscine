int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	else
	{
		while (*str)
		{
			if (!(*str >= '0' && *str <= '9'))
				return (0);
			str++;
		}
		return (1);
	}
}
