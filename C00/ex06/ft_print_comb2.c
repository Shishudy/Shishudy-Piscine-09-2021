/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:28:56 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/11 19:00:47 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	r1;
	int	r2;

	r1 = 0;
	while (r1 <= 98)
	{
		r2 = r1 + 1;
		while (r2 <= 99)
		{
			ft_putchar(r1 / 10 + '0');
			ft_putchar(r1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(r2 / 10 + '0');
			ft_putchar(r2 % 10 + '0');
			if (r1 != 98 || r2 != 99)
				write (1, ", ", 2);
			r2++;
		}
		r1++;
	}
}
