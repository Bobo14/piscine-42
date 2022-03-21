/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:06:41 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/20 17:15:18 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i + 1] = '\0';
	return (dest);
}

int	main()
{
	char tabdest[10000];
	char ptrsrc[] = "je suis une vitrine dans l'espace inconstantinntielle";
	ft_strcpy(tabdest, ptrsrc);
	int i;
	printf("%s\n", ptrsrc);
	return (0);
}
