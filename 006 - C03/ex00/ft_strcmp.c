/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:46:23 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/02 14:56:00 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main(void)
{
	char	*s1 = "";
	char	*s2 = "1";
	int	res = ft_strcmp(s1, s2);

	printf("%d\n", res);
	if (res == 0)
		printf("Strings are the same\n");
	if (res >= 1)
		printf("s1 is higher than s2\n");
	if (res <= -1)
		printf("s1 is less than s2\n");
	return (0);
}
*/
