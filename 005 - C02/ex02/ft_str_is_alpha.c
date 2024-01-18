/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:09:10 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/01 10:39:52 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";
	int	result;

	result = ft_str_is_alpha(str);
	if (result == 1)
		printf("String is alphanumeric\n");
	else
		printf("String contains non-alphanumeric characters\n");
	return (0);
}
*/
