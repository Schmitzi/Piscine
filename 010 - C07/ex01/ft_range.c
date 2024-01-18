/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:46:23 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/09 11:32:34 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
		return (0);
	i = max - min;

	result = (int *)malloc(sizeof(int) * (i));
	if (result == 0)
		return (0);
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	int	min = 5;
	int	max = 20;
	int 	i = 0;
	int	size;
	int	*tab;

	size = max - min;
	tab = ft_range(min ,max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
} 
