/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:49:21 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/27 18:49:21 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	len(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
		i++;
	return (i);
}

int	concatcat(char *concat, char *strs, int n)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
	{
		concat[n + i] = strs[i];
		i++;
	}
	n = n + i;
	return (n);
}

char	*empty_string(void)
{
	char	*s;

	s = malloc(sizeof(char));
	s[0] = 0;
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char				*concat;
	unsigned int		lenconcat;
	int					i;
	int					n;

	if (size == 0)
		return (empty_string());
	i = 0;
	lenconcat = (len(sep) * (size - 1)) + 1;
	while (i < size)
		lenconcat = lenconcat + len(strs[i++]);
	concat = malloc(sizeof(char *) * lenconcat);
	if (concat == NULL)
		return (NULL);
	i = 0;
	n = 0;
	while (i < size)
	{
		if (i != 0)
			n = concatcat(concat, sep, n);
		n = concatcat(concat, strs[i], n);
		i++;
	}
	concat[n] = '\0';
	return (concat);
}

/*#include <libc.h>
int main (int argc, char *argv[])
{
	printf("%s\n", ft_strjoin(argc - 1, &argv[1],"xxx"));
//	printf("%d\n", ft_mem_size(argc - 1, &argv[1], "o"));
	return (0);
}*/