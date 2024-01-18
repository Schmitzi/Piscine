/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:12:34 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/06 14:20:52 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb -1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(4));
	return (0);
}
