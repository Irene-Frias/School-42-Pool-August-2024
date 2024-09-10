/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-r <ifrias-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:06:30 by ifrias-r          #+#    #+#             */
/*   Updated: 2024/07/30 14:17:17 by ifrias-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	write (1, &n, 1);
}

void	ft_print(int a)
{
	ft_putchar (a / 10 + 48);
	ft_putchar (a % 10 + 48);
	write (1, " ", 1);
}

void	ft_print_comb2(void)
{
	int	a;

	a = 0;
	while (a <= 98)
	{
		write (1, ", ", 2);
	}
}
a++;

int main (void)
{
	ft_print_combn(9);
	return(0);
}
