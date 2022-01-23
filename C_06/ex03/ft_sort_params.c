#include <unistd.h>

void	ft_putstr(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}

int	main(int a, char **b)
{
	int		i;
	int		j;
	char	*asd;

	if (a > 1)
	{
		i = 0;
		while (++i < a)
		{
			j = i;
			while (++j < a)
			{
				if (ft_strcmp(b[i], b[j]) > 0)
				{
					asd = b[i];
					b[i] = b[j];
					b[j] = asd;
				}
			}
		}
		i = 0;
		while (++i < a)
			ft_putstr(b[i]);
	}
	return (0);
}
