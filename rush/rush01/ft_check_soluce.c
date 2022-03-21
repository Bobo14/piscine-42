/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_soluce.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagathe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:16:14 by aagathe           #+#    #+#             */
/*   Updated: 2022/03/20 18:27:14 by aagathe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rowleft(char *line, char arg, int size);
int	ft_rowright(char *line, char arg, int size);
int	ft_colup(char **table, int col, char arg, int size);
int	ft_coldown(char **table, int col, char arg, int size);
int	ft_tablen(char *str);

int	ft_check_soluce(char **table, char *argv, int endl)
{
	int	j;
	int	s;

	s = ft_tablen(argv);
	if (!(ft_rowleft(table[endl], *(argv + (endl * 2) + (s * 4)), s)
			&& ft_rowright(table[endl], *(argv + (endl * 2) + (s * 6)), s)))
		return (0);
	j = 0;
	while (j < s && endl == s - 1)
	{
		if (!(ft_colup(table, j, *(argv + (j * 2)), s)
				&& ft_coldown(table, j, *(argv + (j * 2) + (s * 2)), s)))
			return (0);
		j++;
	}
	return (1);
}

int	ft_rowleft(char *line, char arg, int size)
{
	int		i;
	char	heigh;
	char	box;

	box = '1';
	heigh = line[0];
	i = 1;
	while (i < size)
	{
		if (line[i] > heigh)
		{
			heigh = line[i];
			box++;
		}
		i++;
	}
	if (box == arg)
		return (1);
	else
		return (0);
}

int	ft_rowright(char *line, char arg, int size)
{
	int		i;
	char	heigh;
	char	box;

	box = '1';
	heigh = line[size - 1];
	i = size - 2;
	while (i >= 0)
	{
		if (line[i] > heigh)
		{
			heigh = line[i];
			box++;
		}
		i--;
	}
	if (box == arg)
		return (1);
	else
		return (0);
}

int	ft_colup(char **table, int col, char arg, int size)
{
	int		i;
	char	heigh;
	char	box;

	box = '1';
	heigh = table[0][col];
	i = 1;
	while (i < size)
	{
		if (table[i][col] > heigh)
		{
			heigh = table[i][col];
			box++;
		}
		i++;
	}
	if (box == arg)
		return (1);
	else
		return (0);
}

int	ft_coldown(char **table, int col, char arg, int size)
{
	int		i;
	char	heigh;
	char	box;

	box = '1';
	heigh = table[size - 1][col];
	i = size - 2;
	while (i >= 0)
	{
		if (table[i][col] > heigh)
		{
			heigh = table[i][col];
			box++;
		}
		i--;
	}
	if (box == arg)
		return (1);
	else
		return (0);
}
