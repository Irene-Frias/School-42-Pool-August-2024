/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-j <daniel-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:17:29 by daniel-j          #+#    #+#             */
/*   Updated: 2024/07/28 17:22:43 by daniel-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	screen(int x, int y, int line, int column)
{
	if ((line == 0 && column == 0) || (line == y - 1 && column == x - 1))
	{
		ft_putchar('A');
	}
	else if ((line == y - 1 && column == 0) || (line == 0 && column == x -1))
	{
		ft_putchar('C');
	}
	else if ((line == 0) || (column == x -1) || (line == y -1) || (column == 0))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			screen(x, y, line, column);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
