/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:23:40 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/26 09:55:09 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	l;

	l = ft_strlen("kiakaha");
	printf("%d\n", l);
	return (0);
}
*/
