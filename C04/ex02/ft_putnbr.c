/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:32:58 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/20 20:33:00 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nb2;

	nb2 = nb;
	if (nb2 >= 10)
	{
		ft_putnbr(nb2 / 10);
		ft_putnbr(nb2 % 10);
	}
	else if (nb2 >= 0 && nb2 < 10)
		ft_putchar(nb2 + '0');
	else if (nb2 < 0 && nb2 > -10)
	{
		nb2 = -nb2;
		ft_putchar('-');
		ft_putchar(nb2 + '0');
	}
	else
	{
		nb2 = -nb2;
		ft_putchar('-');
		ft_putnbr(nb2 / 10);
		ft_putnbr(nb2 % 10);
	}
}
