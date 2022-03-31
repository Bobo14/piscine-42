/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:10:47 by bdelord           #+#    #+#             */
/*   Updated: 2022/03/23 19:26:31 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] = str[i] + 32;
		i++;
	}
	return (0);
}

int	not(char a)
{
	if ((a >= '0' && a <= '9') || (a >= 'a' && a <= 'z')
		|| (a >= 'A' && a <= 'Z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')) && not(str[i - 1]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int main()
{
	char a[] = " salut, co.mMme/n(t tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s",ft_strcapitalize(a));
	return (0);
}

