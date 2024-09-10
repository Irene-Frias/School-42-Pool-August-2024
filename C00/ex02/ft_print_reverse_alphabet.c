/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-r <ifrias-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:57:41 by ifrias-r          #+#    #+#             */
/*   Updated: 2024/07/26 12:57:58 by ifrias-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfa;

	alfa = 'z';
	while (alfa >= 'a')
	{
		write (1, &alfa, 1);
		alfa--;
	}
}
