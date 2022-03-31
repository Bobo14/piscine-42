/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:31:34 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/22 11:28:30 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
	char g[] = "JKFGKRUYGE";
        ft_str_is_uppercase(g);
        printf("%d", ft_str_is_uppercase(g));
        return (0);
}
*/
