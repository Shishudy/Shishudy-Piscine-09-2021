/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:37:51 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/23 19:37:56 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkprime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (checkprime(nb) == 0)
		nb++;
	return (nb);
}

/*#include<unistd.h>

int	main(void)
{
	if (ft_find_next_prime(4) == 5)
	{
		write(1, "ola\n", 4);
	}
}*/