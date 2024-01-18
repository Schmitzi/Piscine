/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:52:08 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/08 10:19:45 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		n = n * nb;
	return (n);
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 80;
	power = 4;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}
