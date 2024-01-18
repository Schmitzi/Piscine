/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:10:29 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/06 14:12:00 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 1; 
	if (nb < 0)
		return (0);
	while (++i <= nb) 
	{
		res *= i;
	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return (0);
}

