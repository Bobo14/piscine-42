/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:16:58 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/20 15:30:14 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	while (i < size)
	{
		n = i + 1;
		ft_swap(tab + i, tab + (size - i - 1));
			i++;
	}
}


int	main()
{

	int tab[9] = { -2, -36, 12, 9, 8, 0, 2, 65, 8};
	ft_rev_int_tab(tab, 9);
	int i;	
	for (i = 0; i < 9; i++)
		printf("%d\n", tab[i]);
	return (0);
}

