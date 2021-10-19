/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:17:11 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/26 16:17:12 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	writer(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		j = 1;
		while (j != argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j++;
		}
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		n;
	int		n2;

	n = 1;
	if (argc > 1)
	{
		while (n < argc)
		{
			n2 = n + 1;
			while (n2 < argc)
			{
				if (ft_strcmp(argv[n], argv[n2]) > 0)
				{
					temp = argv[n];
					argv[n] = argv[n2];
					argv[n2] = temp;
				}
				n2++;
			}
			n++;
		}
		writer (argc, argv);
	}
	return (0);
}
