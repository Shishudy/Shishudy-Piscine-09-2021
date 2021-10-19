/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:35:19 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/23 19:35:20 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 2)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb == 1 || nb == 0)
		return (1);
	return (0);
}

/*
#include<unistd.h>

int	main()
{
	int m;

	m = ft_recursive_factorial(5);
	if (m == 120)
		write (1, "ola\n", 4);
}*/