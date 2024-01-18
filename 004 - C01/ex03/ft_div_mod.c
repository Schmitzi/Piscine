/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:14:25 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/26 09:38:18 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;	
	int	b;
	int	div;
	int	mod;

	a = 5;
	b = 10;
	div = 0;
	mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("div: %d\n", div);
	printf("mod: %d\n", mod);
	return (0);
}
*/
