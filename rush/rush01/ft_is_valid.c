/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagathe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:56:04 by aagathe           #+#    #+#             */
/*   Updated: 2022/03/20 04:25:29 by aagathe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tablen(char *str);

int	ft_is_valid(int argc, char *arg1)
{
	int	i;
	int	size;

	if (argc != 2)
		return (0);
	i = 0;
	while (arg1[i])
		i++;
	if (((i + 1) / 2) % 4)
		return (0);
	size = (((i + 1) / 2) / 4);
	i = 0;
	while (arg1[i])
	{
		if (i % 2 == 0 && (arg1[i] < '1' || arg1[i] > size + '0'))
			return (0);
		if (i % 2 != 0 && arg1[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_tablen(char *str)
{
	int	k;

	k = 0;
	while (str[k])
		k++;
	return (((k + 1) / 2) / 4);
}
