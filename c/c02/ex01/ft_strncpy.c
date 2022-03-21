/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:25:19 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/20 17:52:08 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
        char tabdest[10000];
        char ptrsrc[] = "je suis une vitrine dans l'espace virtuelle que nous formate le temps";
	unsigned int n = 10000;
        ft_strncpy(tabdest, ptrsrc, n);
        printf("%s\n", tabdest);
        return (0);
}
*/
