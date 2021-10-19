/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:49:50 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/27 18:49:51 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src, int charlen, int i)
{
	char	*str;
	int		index;

	str = malloc(sizeof(str) * (charlen + 1));
	if (str == NULL)
		return (0);
	index = 0;
	while (index < charlen)
	{
		str[index] = src[i + index];
		index++;
	}
	str[index] = '\0';
	return (str);
}

int	check_charset(char *src, char *charset, int i)
{
	int	index;

	index = 0;
	while (index < ft_strlen(charset))
	{
		if (src[i] == charset[index])
			return (0);
		index++;
	}
	return (1);
}

int	ft_charlen(char *str, char *charset, int i)
{
	int	ind;

	ind = 0;
	while (str[i + ind] != '\0' && check_charset(str, charset, (i + ind)) == 1)
		ind++;
	return (ind);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;
	int		charlen;

	i = 0;
	j = 0;
	split = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (split == NULL)
		return (NULL);
	while (i < ft_strlen(str))
	{
		if (check_charset(str, charset, i) == 1)
		{
			charlen = ft_charlen(str, charset, i);
			{
				split[j] = ft_strdup(str, charlen, i);
				i = i + charlen;
				j++;
			}
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*#include <stdio.h>

void	test_split(char *str, char *charset)
{
	char **tab;
	int	i;
	tab = ft_split(str, charset);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
int		main(int ac, char **av)
{
	ac = ac + 1 - av[0][0];
	test_split("    une phraset    toute simple", "un");
	return (0);
}*/