/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:39:35 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/01 10:43:24 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while(*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return str;
}
/*
#include <stdio.h>
int	main(void)
{
 	char	str[] = "AtgSbdfDWE";
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}
*/
