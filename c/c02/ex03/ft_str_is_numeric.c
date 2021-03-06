/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:44:26 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/22 11:23:17 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
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
        char e[] = "1082ss@#$ffwd";
	char f[] = "1568462108910";
        ft_str_is_numeric(e);
        printf("%d", ft_str_is_numeric(e));
        return (0);
}
*/
