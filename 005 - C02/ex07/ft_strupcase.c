/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:22:38 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/02 09:18:13 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
			*str -= ' ';
		str++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "hello";
	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
*/
