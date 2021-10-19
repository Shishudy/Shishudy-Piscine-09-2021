/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:36:57 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/23 19:36:58 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1 || index == 2)
		return (1);
	if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}

/*
#include<unistd.h>

int	main()
{
	int	m;

	m = ft_fibonacci(15);
	if (m == 610)
	write (1, "ola\n", 4);
}*/