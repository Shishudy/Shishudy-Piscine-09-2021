/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:49:06 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/27 18:49:07 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int				*array;
	int				i;
	unsigned int	maxrange;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	maxrange = max - min;
	if (maxrange > 2147483647)
		return (-1);
	array = malloc(sizeof(int *) * (maxrange));
	if (array == NULL)
		return (-1);
	i = -1;
	while (min <= max)
	{
		i++;
		array[i] = min;
		min++;
	}
	*range = array;
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	int		*range;
	int		i;
	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -5, 0));
	while (i < ft_ultimate_range(&range, -5, 0))
	{
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/