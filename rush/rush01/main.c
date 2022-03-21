/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagathe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:35:28 by aagathe           #+#    #+#             */
/*   Updated: 2022/03/20 18:39:04 by aagathe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

void	ft_init_tab(char **table, int size);
void	ft_puttable(char **table, int size);
char	**ft_malloc(int size);
void	ft_free(char **memory, int size);
int		ft_is_valid(int argc, char *arg1);
int		ft_tablen(char *str);
int		ft_recurs(char **table, int i, int j, char *argv);

int	main(int argc, char *argv[])
{
	char	**table;
	int		soluce;
	int		size;

	if (!ft_is_valid(argc, *(argv + 1)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	size = ft_tablen(*(argv + 1));
	table = ft_malloc(size);
	if (table != NULL)
	{
		ft_init_tab(table, size);
		soluce = ft_recurs(table, 0, 0, *(argv + 1));
		if (soluce)
			ft_puttable(table, size);
		else
			write(1, "Error\n", 6);
		ft_free(table, size);
		free(table);
	}
	else
		write(1, "Error\n", 1);
	return (0);
}

char	**ft_malloc(int size)
{
	int		k;
	char	**memory;

	memory = NULL;
	memory = (char **) malloc((size + 1) * sizeof(char *));
	if (memory != NULL)
	{
		k = 0;
		while (k < size)
		{
			memory[k] = (char *) malloc((size + 1) * sizeof(char));
			k++;
		}
		memory[k] = NULL;
	}
	return (memory);
}

void	ft_free(char **memory, int size)
{
	int	k;

	k = 0;
	while (k < size + 1)
	{
		free(memory[k]);
		k++;
	}
}

void	ft_init_tab(char **table, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			table[i][j] = '0';
			j++;
		}
		table[i][j] = '\0';
		i++;
	}
	table[i] = NULL;
}

void	ft_puttable(char **table, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			write(1, &table[i][j], 1);
			if (j != size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
