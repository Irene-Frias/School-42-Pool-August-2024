/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-r <ifrias-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:49:18 by ifrias-r          #+#    #+#             */
/*   Updated: 2024/08/05 19:40:52 by ifrias-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	strlen(char *str)
{
	int	size;
	size = 0;
	while (str[size])
	{
		++size;
	}
	return (size);
}

void	complete(char **matrix, int i, char view)
{
	int	j;

	j = 0;
	if (view == 4)
	{
		if (i / 4 == 2)
		{
			while (j < 4)
			{
				matrix[i / 4][j];
				++j;
			}
		}
		else if (i / 4 == 3)
		{
			j = 3;
			while (j >= 0)
			{
				matrix[i / 4][j];
				--j;
			}
		}
		else if (i / 4 == 0)
		{
			j = 0;
			while (j < 4)
			{
				matrix[j][i % 4];
				--j;
			}
		}
		else if (i / 4 == 1)
		{
			j = 3;
			while (j >= 0)
			{
				matrix[j][i % 4];
				--j;
			}
		}
	}
	else if
	{
		matrix[i / 4][i % 4] = '4';
	}
}

void	run(char **matrix, *view)
{
	int	c;

	c = 0;
	while (c < 16)
	{
		complete(matrix, c, view[c]);
	}
}

int	initializer(char **matrix, char *view)
{
	int	i;
	int	j;

	matrix = (char *)malloc(4 * sizeof(char *));
	if (matrix[i] == NULL)
	{
		return (1);
	}
	while (i < 4)
	{
		i = 0;
		matrix = (char *)malloc(4 * sizeof(char));
		if (matrix[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(matrix[j]);
				++j;
			}
			return (1);
		}
		++i;
	}
		run(matrix, view);
		return (0);
}

void	free_memory(char **matrix)
{
	int	c;
	c = 0;
	while (c < 4)
	{
		free(matrix[i]);
		++c;
	}
	free(matrix);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (strlen(arg[1]) != 16)
		{
			write(1, "Error\n", 6);
		}
		else
		{
			char	**matrix;
			if (initializer(matrix, argv[1]) == 0)
			{
				free(matrix);
			}
			else
			{
				return (1);
			}
		}	
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
