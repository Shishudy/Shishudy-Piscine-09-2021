/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:48:51 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/27 18:48:52 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include<stdio.h>

int main ()
{
	char	*src;
	char	*dest;

	src = "ola mundo";
	(void)dest;
	printf("%s\n", src);
	dest = ft_strdup(src);
	printf("%s\n", dest);
}*/