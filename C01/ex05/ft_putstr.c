/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:43:02 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/13 16:26:43 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	a;
	int	b;

	a = 0;
	while (str[a] != '\0')
	{
		b = str[a];
		write (1, &b, 1);
		a++;
	}
}
