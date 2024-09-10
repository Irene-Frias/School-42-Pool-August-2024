/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-r <ifrias-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:19:00 by ifrias-r          #+#    #+#             */
/*   Updated: 2024/07/30 14:04:50 by ifrias-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int a, int b)
{
	ft_putchar (a / 10 + 48);
	ft_putchar (a % 10 + 48);
	write (1, " ", 1);
	ft_putchar (b / 10 + 48);
	ft_putchar (b % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a, b);
			if (a != 98 || b != 99)
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
