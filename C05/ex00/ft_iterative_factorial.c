/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:34:30 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/23 19:34:32 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long int	nb2;
	long int	nbf;

	nb2 = nb;
	nbf = 1;
	if (nb2 >= 2)
	{
		while (nb2 != 1)
		{
			nbf = nbf * nb2;
			nb2--;
		}
		return (nbf);
	}
	if (nb2 == 1 || nb2 == 0)
		return (1);
	return (0);
}

/*
#include<unistd.h>

int	main()
{
	int m;

	m = ft_iterative_factorial(5);
	if (m == 120)
		write (1, "ola\n", 4);
}*/