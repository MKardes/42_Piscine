int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	else
	{
		while (*str)
		{
			if (! (*str >= 'a' && *str <= 'z'))
				return (0);
			str++;
		}
		return (1);
	}
}
