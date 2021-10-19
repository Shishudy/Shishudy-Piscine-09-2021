/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:37:45 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/25 16:45:41 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	a;
	int	sign;

	i = 0;
	sign = 1;
	a = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + str[i] - '0';
		i++;
	}
	return (a * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s = " ---+--+1234ab567";
	printf("%d %d", ft_atoi(s), atoi(s));
	return (0);
}*/
