/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:37:13 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/20 14:10:34 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

	i = 0;
	while (i <= (size - 1) / 2)
	{
		ft_swap(tab + i, tab + (size - i - 1));
			i++;
	}
}

/*
int main()
{

	int tab[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(tab, 9);
	int i;	
	for (i = 0; i < 9; i++)
		printf("%d\n", tab[i]);
	return (0);
}
*/
