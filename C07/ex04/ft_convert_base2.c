/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:43:56 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/28 19:43:57 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_nbr_in_base(char nbr, char *base_from)
{
	int	i;

	i = 0;
	while (base_from[i])
	{
		if (base_from[i] == nbr)
			return (1);
		i++;
	}
	return (0);
}

int	value_nbr(char nbr, char *base_from)
{
	int	i;

	i = 0;
	while (base_from[i] != '\0')
	{
		if (base_from[i] == nbr)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
