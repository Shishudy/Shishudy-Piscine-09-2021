/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:48:14 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/27 18:48:16 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int						*array;
	int						i;
	unsigned int			maxrange;

	maxrange = max - min;
	if (maxrange > 2147483647 || min >= max)
	{
		array = NULL;
		return (array);
	}
	array = malloc(sizeof(int) * (maxrange));
	i = -1;
	while (min < max)
	{
		i++;
		array[i] = min;
		min++;
	}
	return (array);
}

/*#include <stdio.h>

int main (int argc, char *argv[])
{
	argc = 1;
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	int *tab;
	tab = ft_range(min, max);
	for (int i = 0; i < (max-min); i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	free(tab);
}*/