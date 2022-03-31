/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:40:51 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/24 14:18:30 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i - 1];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (*dest);
}

int	main()
{
        char tabdest[10000];
        char ptrsrc[] = "je suis l'espace virtuelle que nous formate le temps";
	unsigned int n = 10000;
        ft_strlcat(tabdest, ptrsrc, n);
        printf("%s\n", tabdest);
        return (0);
}

