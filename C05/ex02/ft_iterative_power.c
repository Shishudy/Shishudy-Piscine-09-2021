/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:36:21 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/23 19:36:23 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	aux;
	int	i;

	aux = 1;
	i = 0;
	if (power >= 0)
	{
		while (i < power)
		{
			aux = aux * nb;
			i++;
		}
		return (aux);
	}
	return (0);
}

/*
#include<unistd.h>

int	main()
{
	int m;

	m = ft_iterative_power(-5, 3);
	if (m == -125)
		write (1, "ola\n", 4);
}*/