/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:55:14 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/20 22:27:11 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')
	{	
		if ((str[i] >= 'A')  && (str[i] <= 'Z')
			|| (str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	while ((str[i] > 1) && (str[i] < 127))
	char a[] = "allo";
	char b[] = "Ao^%9";
	char c[] = "68nh54";
	char d[] = "";
	char e[] = "\*/12ss@#$ffwd";
	ft_str_is_alpha(d);
	printf("%d", ft_str_is_alpha(d));
	return (0);
}
*/
