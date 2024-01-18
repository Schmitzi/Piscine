/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:46:23 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/02 14:28:14 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (!n)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char	*s1 = "12345";
	char	*s2 = "11345";
	unsigned int	n = 1;
	int	res = ft_strncmp(s1, s2, n);

	if (res == 0)
		printf("Strings are the same to %d characters\n", n);
	if (res >= 1)
		printf("s1 is higher than s2 to %d characters\n", n);
	if (res <= -1)
		printf("s1 is less than s2 to %d characters\n", n);
	return (0);
}
*/
