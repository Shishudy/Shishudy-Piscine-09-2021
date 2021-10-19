/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:22:14 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/16 20:22:18 by rasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*dest;
	int		i;

	dest = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0' || str[i - 1] > 'z')
				str[i] -= 32;
			if (str[i - 1] < 'a' && str[i - 1] > 'Z')
				str[i] -= 32;
			if (str[i - 1] >= ':' && str[i - 1] <= '@')
				str[i] -= 32;
		}
		i++;
	}
	str = dest;
	return (str);
}
