/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:36:41 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/23 19:36:43 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	return (0);
}

/*
#include<unistd.h>

int	main()
{
	int m;

	m = ft_recursive_power(5, -2);
	if (m == 0)
		write (1, "ola\n", 4);
}*/