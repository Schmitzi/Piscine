/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:11:10 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/26 09:34:09 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("Before\na: %d\nb: %d\n", a, b);
	ft_swap(&a, &b);
	printf("After\na: %d\nb: %d\n", a, b);
}

