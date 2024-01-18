/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:46:51 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/21 11:41:20 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_char(int n1, int n2)
{
	char	c1;
	char	c2;

	c1 = n1 / 10 + 48;
	write(1, &c1, 1);
	c1 = n1 - ((n1 / 10) * 10) + 48;
	write(1, &c1, 1);
	write(1, " ", 1);
	c2 = n2 / 10 + 48;
	write(1, &c2, 1);
	c2 = n2 - ((n2 / 10) * 10) + 48;
	write(1, &c2, 1);
	write(1, ", ", 2);
	if (n1 == 98 && n2 == 99)
	{
		write(1, "\b", 2);
		write(1, "\b", 2);
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 00;
	n2 = 01;
	while (n2 <= 99)
	{
		while (n1 <= 98)
		{
			print_char(n1, n2);
			if (n2 != 99)
				n2++;
			else if (n2 == 99)
			{
				n1 = n1 + 1;
				n2 = n1 + 1;
			}
		}
	}		
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
