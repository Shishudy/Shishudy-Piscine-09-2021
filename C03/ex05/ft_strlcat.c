/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:16:55 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/19 15:16:57 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	i = 0;
	while (dest[a])
		a++;
	while (src[b])
		b++;
	if (size == 0)
		return (b);
	if (size <= a)
		return (size + b);
	while (size && i < (size - a - 1) && src[i])
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (b + a);
}
