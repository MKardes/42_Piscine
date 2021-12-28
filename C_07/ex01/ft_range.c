#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*me;

	if (min >= max)
	{
		return (me = NULL);
	}
	range = max - min;
	me = (int *)malloc(range * sizeof(int));
	if (!me)
		return (0);
	i = 0;
	while (min < max)
	{
		me[i] = min ;
		min++;
		i++;
	}
	return (me);
}
