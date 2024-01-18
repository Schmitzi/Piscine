/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:10:51 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/26 10:17:08 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	has_swapped;
	int	swap;
	
	has_swapped  = 1;
	while(has_swapped) 
	{
		has_swapped = 0;
		i = 0;
		while(i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				has_swapped = 1;
			}
			i++;
		}
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[]  = {5,1,3,1};
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("\n");
	ft_sort_int_tab(tab, 4);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
}
*/		
