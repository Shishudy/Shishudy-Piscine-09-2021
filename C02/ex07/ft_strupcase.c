/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:50:00 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/16 19:50:03 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*dest;

	dest = str;
	while (*str)
	{
		if (*str > '`' && *str < '{')
			*str -= 32;
		str++;
	}
	str = dest;
	return (str);
}
