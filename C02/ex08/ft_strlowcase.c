/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-r <ifrias-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:58:57 by ifrias-r          #+#    #+#             */
/*   Updated: 2024/08/13 15:23:56 by ifrias-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_capital(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	char	temp;
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_is_capital(str[i]))
		{
			temp = str[i];
			temp = temp + 32;
			str[i] = temp;
		}
		i++;
	}
	return (str);
}
