int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (!((65 <= *str && *str <= 90) || (97 <= *str && *str <= 122)))
			{
				return (0);
			}
			str++;
		}
	}
	return (1);
}
