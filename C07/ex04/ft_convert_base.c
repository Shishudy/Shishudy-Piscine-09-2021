/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:49:34 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/27 18:49:35 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_check_base(char *base);

int	ft_strlen(char *str);

int	check_nbr_in_base(char nbr, char *base_from);

int	value_nbr(char a, char *base);

int	fnbr_length(long dec, char *base_to)
{
	int	i;
	int	size;

	size = ft_strlen(base_to);
	i = 0;
	if (dec <= 0)
	{
		i = 1;
		dec = -dec;
	}
	while (dec != 0)
	{
		dec = dec / size;
		i++;
	}
	return (i);
}

long	ft_atoi_base(char *nbr, char *base_from)
{
	int		i;
	int		sign;
	long	dec;
	int		size;

	size = ft_strlen(base_from);
	sign = 1;
	i = 0;
	dec = 0;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nbr[i] != '\0' && check_nbr_in_base(nbr[i], base_from) == 1)
	{
		dec = dec * size + value_nbr(nbr[i], base_from);
		i++;
	}
	return (dec * sign);
}

char	*ft_itoa_base(long dec, char *base_to)
{
	int		size;
	char	*fnbr;
	int		i;
	int		j;

	size = ft_strlen(base_to);
	i = 0;
	j = fnbr_length(dec, base_to);
	fnbr = malloc(sizeof(char *) * (j));
	if (dec < 0)
	{
		fnbr[0] = '-';
		dec = -dec;
		i = 1;
	}
	fnbr[j] = '\0';
	while (--j >= i)
	{
		fnbr[j] = base_to[dec % size];
		dec = dec / size;
	}
	return (fnbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	dec;
	char	*fnbr;

	if (ft_check_base(base_from) == 0)
		return (NULL);
	if (ft_check_base(base_to) == 0)
		return (NULL);
	dec = ft_atoi_base(nbr, base_from);
	if (dec > 2147483647 || dec < -2147483648)
		return (NULL);
	else
	{
		fnbr = ft_itoa_base(dec, base_to);
		return (fnbr);
	}
}
