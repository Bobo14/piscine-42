/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagathe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:57:09 by aagathe           #+#    #+#             */
/*   Updated: 2022/03/20 17:08:45 by aagathe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_value(char **table, int line, int col, int value);
void	ft_ty_norminet(int *size, int *value, int *answer, char *argv);
int		ft_check_soluce(char **table, char *argv, int endl);
int		ft_tablen(char *str);

int	ft_recurs(char **table, int i, int j, char *argv)
{
	int	find;
	int	value;
	int	answer;
	int	size;

	ft_ty_norminet(&size, &value, &answer, argv);
	while (i < size && j < size && ++value < size + 1)
	{
		find = ft_check_value(table, i, j, value);
		if (find && j != size - 1)
			answer = ft_recurs(table, i, j + 1, argv);
		else if (j == size - 1 && find)
		{
			if (ft_check_soluce(table, argv, i))
			{
				if (i == size - 1)
					return (1);
				answer = ft_recurs(table, i + 1, 0, argv);
			}
		}
		if (answer)
			return (1);
	}
	return (0);
}

int	ft_check_value(char **table, int line, int col, int value)
{
	int	i;
	int	j;

	i = 0;
	while (i < line)
	{
		if ((value + '0') == table[i][col])
			return (0);
		i++;
	}
	j = 0;
	while (j < col)
	{
		if ((value + '0') == table[line][j])
			return (0);
		j++;
	}
	table[line][col] = value + '0';
	return (1);
}

void	ft_ty_norminet(int *size, int *value, int *answer, char *argv)
{
	*size = ft_tablen(argv);
	*value = 0;
	*answer = 0;
}
