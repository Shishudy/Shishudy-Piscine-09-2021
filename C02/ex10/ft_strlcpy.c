/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:31:25 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/18 16:31:29 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (i < (size - 1) && size > 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (*src)
	{
		src_len++;
		src++;
	}
	dest[i] = '\0';
	return (src_len);
}
