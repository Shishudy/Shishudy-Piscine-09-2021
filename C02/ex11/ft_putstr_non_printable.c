/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:07:26 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/18 17:07:30 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		m;

	i = 0;
	while (str[i] != '\0')
	{
		m = str[i];
		if (m < 0)
			m = m + 256;
		if (m < 32 || m > 126)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[m / 16]);
			ft_putchar("0123456789abcdef"[m % 16]);
		}
		else
			ft_putchar(m);
		i++;
	}
}
