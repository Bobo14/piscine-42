/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:50:33 by rimbert           #+#    #+#             */
/*   Updated: 2022/03/16 15:08:37 by bdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	rush(int width, int height);
/*
int	main(void)
{
	rush (1, 1);
	return (0);
}
*/

#include <unistd.h>

int main (int argc, char **argv)
{
	rush(atoi(argv[0]),argv[1]);
}
