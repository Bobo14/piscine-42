/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:06:41 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/22 11:13:15 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char tabdest[100];
	char ptrsrc[] = "je suis une vitrine dans l'espace inconstantinntielle";
	ft_strcpy(tabdest, ptrsrc);
	printf("%s\n", tabdest);
	return (0);
}
*/
