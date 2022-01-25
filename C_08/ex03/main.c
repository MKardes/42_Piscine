#include <stdlib.h>
#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	*dene;
	dene = (t_point*) malloc(sizeof(dene));
	dene -> x = 10;
	printf("***%d***", dene -> x);

	set_point(dene);
	printf("%d,%d",dene -> x, dene -> y);
	return(0);
}
