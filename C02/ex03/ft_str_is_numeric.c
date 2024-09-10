/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-r <ifrias-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:39:11 by ifrias-r          #+#    #+#             */
/*   Updated: 2024/08/01 18:08:18 by ifrias-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!ft_is_number(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
