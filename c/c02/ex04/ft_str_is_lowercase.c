/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:29:14 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/22 11:24:55 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{

	char a[] = "allo";
	char b[] = "Ao^%9";
	char c[] = "68nh54";
	char d[] = "";
	char e[] = "/12*ss@#$ffwd";
	char f[] = "aB";
	ft_str_is_lowercase(f);
	printf("%d", ft_str_is_lowercase(f));
	return (0);
}
*/
