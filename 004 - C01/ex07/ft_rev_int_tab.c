/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:49:06 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/26 10:00:19 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {0,1,2,3};
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("\n");

	ft_rev_int_tab(tab, 4);

	printf("%d", tab[0]);
        printf("%d", tab[1]);
        printf("%d", tab[2]);
        printf("%d", tab[3]);
        printf("\n");
	return (0);
}
*/
