/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcil <fcil@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 03:46:34 by fcil              #+#    #+#             */
/*   Updated: 2021/12/13 03:48:56 by fcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	i = 0;
	range = max - min;
	me = (int *)malloc(range * sizeof(int));
	if (!me)
		return (0);
	while (min < max)
	{
		me[i] = min ;
		min++;
		i++;
	}
	return (me);
}
