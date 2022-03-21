/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:49:36 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/18 10:28:08 by bdelord          ###   ########.fr       */
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
/*	int i;
	int j;

	*a = i;
	*b = j;

	i = *b;
	j = *a;
}

int main()
{
	int nb1;
	int nb2;

	nb1 = 12;
	nb2 = 10;

	ft_swap(&nb1, &nb2);
	printf("%d ------ %d\n", nb1, nb2);
	return (0);
}
*/
