/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-r <ifrias-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:02:20 by ifrias-r          #+#    #+#             */
/*   Updated: 2024/08/07 18:48:49 by ifrias-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendest;
	unsigned int	lensrc;
	unsigned int	i;

	lendest = 0;
	while (dest[lendest])
	{
		lendest++;
	}
	lensrc = 0;
	while (src[lensrc])
	{
		lensrc++;
	}
	if (size <= lendest)
		return (size + lensrc);
	i = 0;
	while (src[i] != '\0' && lendest + i < size - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
