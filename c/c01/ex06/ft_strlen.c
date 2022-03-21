/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:16:28 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/18 10:33:48 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int 	main()
{
	int lenght = ft_strlen("hell"); 

	printf("%d\n", lenght);
	printf("%d", ft_strlen("hell"));
	return (0);
}
*/
