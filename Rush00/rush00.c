/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:32:45 by rasantos          #+#    #+#             */
/*   Updated: 2021/09/12 16:12:40 by efreire-         ###   ########.fr       */
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
		if (col == 1 || col == width)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
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
			ft_putchar('|');
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
		if (col == 1 || col == width)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		col++;
	}
}
