/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:03:53 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/18 10:30:07 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main()
{
	int nb1 = 10;
	int nb2 = 5;

	int sumdiv;
	int summod;

	ft_div_mod(nb1, nb2, &sumdiv, &summod);
	printf("%d----%d", sumdiv, summod);
	return (0);
}
*/
