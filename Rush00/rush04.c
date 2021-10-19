/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:02:59 by esierra-          #+#    #+#             */
/*   Updated: 2021/09/12 19:02:53 by esierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_line(int line, int width, int height);
void	print_first_line(int width);
void	print_middle_line(int width);
void	print_last_line(int width);

void	rush(int x, int y)
{
	int	line;
	int	width;
	int	height;

	line = 1;
	width = x;
	height = y;
	while (line <= height)
	{
		if (width <= 0 || height <= 0)
			break ;
		print_line(line, width, height);
		ft_putchar('\n');
		line++;
	}
}

void	print_line(int line, int width, int height)
{
	if (line == 1)
	{
		print_first_line(width);
	}
	else if (line == height)
	{
		print_last_line(width);
	}
	else
	{
		print_middle_line(width);
	}
}

void	print_first_line(int width)
{
	int	col;

	col = 1;
	while (col <= width)
	{
		if (col == 1 )
		{
			ft_putchar('A');
		}
		    else if (col == width)
		{
			ft_putchar('C');
		}		
		else
		{
			ft_putchar('B');
		}
		col++;
	}
}

void	print_middle_line(int width)
{
	int	col;

	col = 1;
	while (col <= width)
	{
		if (col == 1 || col == width)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		col++;
	}
}

void	print_last_line(int width)
{
	int	col;

	col = 1;
	while (col <= width)
	{
		 if (col == 1)
		{
			ft_putchar('C');
		}
		else if (col == width)
		{
			ft_putchar('A');
		}		
		else
		{
			ft_putchar('B');
		}
		col++;
	}
}
