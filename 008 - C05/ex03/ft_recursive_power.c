/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:07:25 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/06 16:32:21 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb = nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(10, 3));
	return (0);
}
