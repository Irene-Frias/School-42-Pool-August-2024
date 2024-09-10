/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-r <ifrias-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:59:43 by ifrias-r          #+#    #+#             */
/*   Updated: 2024/07/26 12:59:51 by ifrias-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char
		alfa;

	alfa = 'a';
	while (alfa <= 'z')
	{
		write(1, &alfa, 1);
		alfa++;
	}
}
