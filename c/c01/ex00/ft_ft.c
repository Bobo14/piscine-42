/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:25:37 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/18 11:45:40 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int	main()
{
	int source; 	//valleur
			//&source address de source


	nb = &source;
			//*nb = valeur de source
	
	ft_ft(&source);
	printf("%d\n", source);
	return (0);
}

