/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:37:22 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/01 15:43:36 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		dest++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dest[10];
	
	printf("Dest: %s\nSrc: %s\n", dest, src);
	ft_strcpy(dest, src);
	printf("\nDest: %s\nSrc: %s\n", dest, src);
	return (0);
}

