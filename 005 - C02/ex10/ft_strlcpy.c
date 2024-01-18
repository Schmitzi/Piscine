/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:43:54 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/01 10:45:01 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	while(i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return i;
}
/*
#include <stdio.h>
int main(void)
{
	unsigned int    size = 2;
	char    dest[0];
	char    src[] = "Arthur Dent";

	printf("Dest: %s\n Src: %s\n", dest, src);
	ft_strlcpy(dest, &src[0], size);
	printf("Dest: %s\n Src: %s\n", dest, src);
}
*/
