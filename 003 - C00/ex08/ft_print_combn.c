/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 11:27:11 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/23 11:38:42 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(int array[], int s)
{
	int	i;

	i = s - 1;
	while (i)
	{
		if (array[i] == array[i - 1] + 1)
			i--;
		else
			break ;
	}
	return (i - 1);
}

void	ft_reset(int array[], int s, int index)
{
	array[index]++;
	index++;
	while (index < s)
	{
		array[index] = array[index - 1] + 1;
		index++;
	}
}

void	print_numbers(int array[], int s)
{
	int	i;

	i = 0;
	while (i < s)
		ft_putchar(array[i++] + '0');
	if (array[0] < 10 - s)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	array[10];

	i = 0;
	while (i < n)
	{
		array[i] = i;
		i++;
	}
	while (array[0] <= 10 - n)
	{
		if (array[n - 1] < 9)
		{
			print_numbers(array, n);
			array[n - 1]++;
		}
		else
		{
			print_numbers(array, n);
			i = check(array, n);
			if (i < 0)
				break ;
			ft_reset(array, n, i);
		}
	}
}
