/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:54:58 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/26 09:03:27 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int	main(void)
{
	int	nbr;

	nbr = 21;
	printf("%d\n", nbr);
	ft_ft(&nbr);
	printf("%d\n", nbr);
	return (0);
}