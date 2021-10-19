/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:02:19 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/22 20:02:22 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base [i])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (1);
}

void	writer(long int nbr, char *base)
{
	long int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	if (nbr >= i)
	{
		writer(nbr / i, base);
		writer(nbr % i, base);
	}
	else if (nbr < i)
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr2;

	nbr2 = nbr;
	if (check_base(base) == 1)
	{
		if (nbr2 < 0)
		{
			nbr2 = -nbr2;
			ft_putchar('-');
		}
		writer(nbr2, base);
	}
}

/*int     main(void)
{
	ft_putnbr_base(-2147483648, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "01234567");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789abcdef");
    return (0);
}*/