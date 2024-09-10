/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-r <ifrias-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 19:03:29 by ifrias-r          #+#    #+#             */
/*   Updated: 2024/08/09 13:47:26 by ifrias-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_capital(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	char	temp;
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_is_capital(str[i]))
		{
			temp = str[i];
			temp = temp - 32;
			str[i] = temp;
		}
		i++;
	}
	return (str);
}
