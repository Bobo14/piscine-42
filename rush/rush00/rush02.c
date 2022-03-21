/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:47:00 by rimbert           #+#    #+#             */
/*   Updated: 2022/03/13 22:47:09 by rimbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_line(char left, char middle, char right, int lenght);

void	rush(int width, int height)
{
	int		current_height;

	if (width <= 0 || height <= 0)
		return ;
	current_height = 1;
	while (current_height <= height)
	{
		if (current_height == 1)
			print_line('A', 'B', 'A', width);
		else if (current_height == height)
			print_line('C', 'B', 'C', width);
		else
			print_line('B', ' ', 'B', width);
		current_height++;
	}
}

void	print_line(char left, char middle, char right, int width)
{
	int		current_width;

	current_width = 2;
	ft_putchar(left);
	while (current_width < width)
	{
		ft_putchar(middle);
		current_width++;
	}
	ft_putchar(right);
	ft_putchar('\n');
}
