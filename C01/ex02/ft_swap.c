/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-r <ifrias-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:24:32 by ifrias-r          #+#    #+#             */
/*   Updated: 2024/07/30 17:41:13 by ifrias-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporal;

	temporal = *b;
	*b = *a;
	*a = temporal;
}
