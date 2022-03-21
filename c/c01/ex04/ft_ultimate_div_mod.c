/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:03:22 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/18 10:30:44 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	z;

	z = *a;
	*a = z / *b;
	*b = z % *b;
}

/*
#include <stdio.h>

int	main()
{
	int nb1 = 8;
	int nb2 = 11;

	ft_ultimate_div_mod(&nb1, &nb2);
	printf("%d----%d", nb1, nb2);
	return (0);
}
*/
