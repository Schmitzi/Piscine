/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:24:55 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/03 12:55:15 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_white(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\f')
			i++;
		if (str[i] == '\n' || str[i] == '\r')
			i++;
		if (str[i] == '\t' || str[i] == '\v')
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = is_white(str);
	while (str[i] != '\0')
	{
		if (str[i] == '+')
			i++;
		if (str[i] == '-')
			sign = sign * -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - '0');
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				break ;
		}
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "s+--+ofih1237348+-++-+";
	char	str[] = "    ---+--+1234ab567";
	int	val = ft_atoi(str);
	printf("%d ", val);
	return (0);
}
*/
