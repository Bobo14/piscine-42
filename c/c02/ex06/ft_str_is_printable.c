/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:39:02 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/22 11:31:28 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
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
        char e[] = "ss@#$ffwd";
        char f[] = "aB";
        char g[] = "JKFGKRUYGE";
	char h[2];
	h[0] = 32;
	char i[2];
	i[0] = 126;
	char j[2];
	j[0] = 127;
        ft_str_is_printable(j);
        printf("%d", ft_str_is_printable(j));
        return (0);
}
*/
