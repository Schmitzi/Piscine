/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 09:42:53 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/22 14:17:40 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x < 1 || y < 1)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col > 1 && col < x) && (row > 1 && row < y))
				ft_putchar(' ');
			else if ((col > 1 && col < x) && (row == 1 || row == y))
				ft_putchar('-');
			else if ((row > 1 && row < y) && (col == 1 || col == x))
				ft_putchar('|');
			else
				ft_putchar('o');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
