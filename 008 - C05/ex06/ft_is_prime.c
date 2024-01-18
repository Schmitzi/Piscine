/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:08:43 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/08 10:18:05 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i <= nb / 2)
    {
        if ((nb % i) == 0)
            return (0);
        i++;        
    }
    return (1);
}
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_is_prime(2));
    return (0);
}
